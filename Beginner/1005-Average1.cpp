#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
float a,b,m;
scanf("%f\n%f",&a,&b);
if(a>=0&&a<=10&&b>=0&&b<=10){
m= ((a*3.5)+(b*7.5))/11;
printf("MEDIA = %0.5f\n",m);}
    return 0;
}
