#include <stdio.h>
#include <stdlib.h>

int main(void) {
int c1,c2,u1,u2;
double t,p1,p2;
scanf("%d %d %lf\n%d %d %lf",&c1,&u1,&p1,&c2,&u2,&p2);
t=(u1*p1)+(u2*p2);
printf("VALOR A PAGAR: R$ %0.2f\n",t);
	return (0);
}
