#include <stdio.h>
#include <math.h>
int main(void) {
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a){
	printf("Perimetro = %0.1f\n",a+b+c);
}else{
	float ar= 0.5*(a+b)*c;
	printf("Area = %0.1f\n",ar);
}
return 0;
}
