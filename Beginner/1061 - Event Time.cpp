#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main() {

	int d1,h1,m1,s1,d2,h2,m2,s2,w,x,y,z;
	scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);

	if(h1==h2&&m2<m1)
	    x=24*60-(m1-m2);
	else if(h1==h2&&m2>m1)
	    x=m2-m1;
	else if(h1<h2&&m1>m2)
	    x=((h2-h1)*60)-(m1-m2);
	else if(h1<h2&&m1<m2)
	    x=((h2-h1)*60)+(m2-m1);
	else
	x=((24-h1+h2)*60)+(m2-m1);

	y=x;
	x=x/60;

	if(d1==d2)
		w=0;
	if(h1>h2)
		w=((d2-d1)-1);
	else
		w=(d2-d1);


	if(s1>s2){
		y-=1;
		z=60-(s1-s2);
	}else
		z=(s2-s1);

	y=y%60;
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",w,x,y,z);
	return 0;
}
