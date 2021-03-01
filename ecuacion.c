//* ECUACION RECTA*//



#include <stdio.h> //Librerias//
#include <stdlib.h>//Librerias//
struct punto{ //se inicializa la estructua con los valores x,y//
float x; float y;
}; //variables inicio
void pedir_puntos1 (struct punto*,struct punto*); //se llama la funcion de pedir puntos//
void pendiente(float*,struct punto,struct punto); //se llama la funcion pendiente//
void ecuacion(float*,struct punto,struct punto);// se llama a la funcion para imprimir la ecuacion//




int main() { // se crea la funcion main donde se va a llamar a las funciones
float pen; //float para valor pendiente
struct punto p1,p2;//struct con punto p1,p2
int opc;

do{
        system("cls");
        
        printf ("\n\t1. Ingresar valores\n");
        printf ("\n\t2. Mostrar promedio\n");
        printf ("\n\t3. Salir\n");
        printf ("\n seleccione opci%cn >> ",  162);
        scanf("%d",&opc);
        system("cls");
        switch (opc)
        {
               case 1:  pedir_puntos1(&p1,&p2);	
                       break;
                       
               case 2: 	pendiente(&pen,p1,p2);
						ecuacion(&pen,p1,p2);
               
        }
        system ("pause");
    }while (opc != 3); 
	
}


void pedir_puntos1(struct punto *p1,struct punto *p2 ){//funcion para pedir puntos
printf("\ningrese datos de x1\n"); //se pide el ingreso de datos x1
scanf("\n%f",&p1->x );
printf("\ningrese datos de y1\n"); // //se pide el ingreso de datos y1
scanf("\n%f",&p1->y);
printf("\ningrese datos de x2\n");//se pide el ingreso de datos x2
scanf("\n%f",&p2->x );
printf("\ningrese datos de y2\n");//se pide el ingreso de datos y2
scanf("\n%f",&p2->y);
// printf("\n%f %f\n",p1->x,p1->y);
// printf("\n%f %f\n",p2->x,p2->y);
}
void pendiente(float * pen,struct punto p1,struct punto p2 ){ // Funcion para hallar la pendiente



float d=*pen; //recupera el valor que hay en ese puntero



d=((p2.y)-(p1.y))/((p2.x)-(p1.x)); // calculo pendiente




*pen=d; //apuntador pendiente
}
void ecuacion(float* pen,struct punto p1,struct punto p2){//funcion para hallar el valor b de la ecuacion e imprimir//
float d=*pen;//recupera el valor que tiene ese puntero
float b;
b= -(d*p1.x) + p1.y; // hallar el punto de corte de la ecuacion
printf("\n La ecuacion de la recta es:\n");
printf("\n Y= %.3fx + %.3f\n",d,b);



*pen=d; //apuntador pendiente
}
