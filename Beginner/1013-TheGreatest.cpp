#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(void) {

int a,b,c;
scanf("%d %d %d",&a,&b,&c);

printf("%d eh o maior\n",(((a+b+abs(a-b))/2)+c+abs(((a+b+abs(a-b))/2)-c))/2);
return 0;
}
