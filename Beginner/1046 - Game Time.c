#include <stdio.h>

int main(void) {
int a,b,x;
scanf("%d %d",&a,&b);
if(b>a){
	a+=b;
	b=a-b;
	a=a-b;
}
if(a>12&&b<12){
	x=b+12-(a-12);
}else if(a>12&&b>12){
x=(a-12)-(b-12);

}else{
	x=a-b;
}
printf("O JOGO DUROU %d HORA(S)\n",x);
return 0;
}
