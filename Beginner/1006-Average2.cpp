#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
float A,B,C,m;
scanf("%f\n%f\n%f",&A,&B,&C);
if(A>=0&&A<=10&&B>=0&&B<=10&&C>=0&&C<=10){
    m=((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %0.1f\n",m);
}
    return 0;
}
