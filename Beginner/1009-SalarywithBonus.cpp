#include <stdio.h>
#include <stdlib.h>

int main(void) {
char n[1000];
double f,v,t;
scanf("%s\n%lf\n%lf",n,&f,&v);
t=f+(v*.15);
printf("TOTAL = R$ %0.2f\n",t);
	return (0);
}
