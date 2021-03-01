//* ECUACION RECTA*//

#include <stdio.h> //Librerias//
#include <stdlib.h> //Librerias//

struct punto{ float x; float y; }; //se inicializa la estructua con los valores x,y//
void pedir_puntos1 (struct punto*,struct punto*); //se llama la funcion de pedir puntos//
void pendiente(float*,struct punto,struct punto); //se llama la funcion pendiente//
void ecuacion(float*,struct punto,struct punto);// se llama a la funcion para imprimir la ecuacion//


int main() {                      // se crea la funcion main donde se va a llamar a las funciones//
        float pen;                //float para valor pendiente
        struct punto p1,p2;       //struct con punto p1,p2
        pedir_puntos1(&p1,&p2);   //apuntadores
        pendiente(&pen,p1,p2);    //apuntadores
        ecuacion(&pen,p1,p2);     //apuntadores
}
void pedir_puntos1(struct punto *p1,struct punto *p2 ){   //funcion para pedir puntos
        printf("\ningrese datos de x1\n");     //se pide el ingreso de datos x1
        scanf("\n%f",&p1->x );
        printf("\ningrese datos de y1\n");    //se pide el ingreso de datos y1
        scanf("\n%f",&p1->y);
        printf("\ningrese datos de x2\n");   //se pide el ingreso de datos x2
        scanf("\n%f",&p2->x );
        printf("\ningrese datos de y2\n");   //se pide el ingreso de datos y2
        scanf("\n%f",&p2->y);

}
void pendiente(float * pen,struct punto p1,struct punto p2 ){ // Funcion para hallar la pendiente

	float  d=*pen;           // calculo pendiente

	*pen=d; 		//apuntador pendiente
}
void ecuacion(float* pen,struct punto p1,struct punto p2){  //funcion para hallar el valor b de la ecuacion e imprimir
	float d=*pen;
        float b;
        b= -(d*p1.x) + p1.y;     // hallar el punto de corte de la ecuacion
        printf("\n La ecuacion de la recta es:\n");
        printf("\n Y= %.3fx %.3f\n",d,b);
  
	*pen=d;    //apuntador pendiente
}
