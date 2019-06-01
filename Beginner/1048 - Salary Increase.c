#include <stdio.h>

int main(void) {
float x;
scanf("%f",&x);
if(x<=400)
	printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %\n",x+x*.15,x*.15,15);
else if(x<=800)
	printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %\n",x+x*.12,x*.12,12);
else if(x<=1200)
	printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %\n",x+x*.10,x*.10,10);
else if(x<=2000)
	printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %\n",x+x*.7,x*.7,7);
else
	printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %\n",x+x*.4,x*.4,4);


return 0;
}
