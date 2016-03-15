#include <stdio.h>
#include <stdlib.h>

int main(void) {

float  A,B,C;
scanf("%f %f %f",&A,&B,&C);
printf("TRIANGULO: %0.3f\n",0.5*A*C);
printf("CIRCULO: %0.3f\n",C*3.14159*C);
printf("TRAPEZIO: %0.3f\n",0.5*(A+B)*C);
printf("QUADRADO: %0.3f\n",B*B);
printf("RETANGULO: %0.3f\n",A*B);
return 0;
}
