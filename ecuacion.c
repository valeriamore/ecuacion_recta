//* ECUACION RECTA*//

#include <stdio.h>
#include <stdlib.h>
struct punto{
        float x; float y;
};
int main() {
        float pen;
        struct punto p1,p2;
        void pedir_puntos1 (struct punto*,struct punto*);
        void pendiente(float*,struct punto,struct punto);
        void ecuacion(float*,struct punto,struct punto);
        pedir_puntos1(&p1,&p2);
        pendiente(&pen,p1,p2);
        ecuacion(&pen,p1,p2);
}
void pedir_puntos1(struct punto *p1,struct punto *p2 ){
        printf("\ningrese datos de x1\n");
        scanf("\n%f",&p1->x );
        printf("\ningrese datos de y1\n");
        scanf("\n%f",&p1->y);
        printf("\ningrese datos de x2\n");
        scanf("\n%f",&p2->x );
        printf("\ningrese datos de y2\n");
        scanf("\n%f",&p2->y);
        // printf("\n%f %f\n",p1->x,p1->y);
        // printf("\n%f %f\n",p2->x,p2->y);
}
void pendiente(float * pen,struct punto p1,struct punto p2 ){

	float  d=*pen;

	d=((p2.y)-(p1.y))/((p2.x)-(p1.x));
     

	*pen=d;
}
void ecuacion(float* pen,struct punto p1,struct punto p2){
	float d=*pen;
        float b;
        b= -(d*p1.x) + p1.y;
        printf("\n La ecuacion de la recta es:\n");
        printf("\n Y= %.3fx %.3f\n",d,b);
  
	*pen=d;
}
