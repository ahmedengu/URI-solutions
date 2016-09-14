#include <stdio.h>
#include <math.h>
int main(void) {
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
float x=b*b-4*a*c,x1=(-b+sqrt(x))/(2*a),x2=(-b-sqrt(x))/(2*a);
if(a!=0&&x>0){
	printf("R1 = %0.5f\n",x1);
		printf("R2 = %0.5f\n",x2);
}else{
	printf("Impossivel calcular\n");
}
return 0;
}
