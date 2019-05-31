#include <stdio.h>

int main(void) {
int x,y,xx,yy,h,m;
scanf("%d %d %d %d",&x,&xx,&y,&yy);
	
if(x==y&&yy<xx)
	m=24*60-(xx-yy);
else if(x==y&&yy>xx)
	m=yy-xx;
else if(x<y&&xx>yy)
	m=((y-x)*60)-(xx-yy);
else if(x<y&&xx<yy)
	m=((y-x)*60)+(yy-xx);
else
m=((24-x+y)*60)+(yy-xx);

h=m/60;
m=m%60;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
return 0;
}
