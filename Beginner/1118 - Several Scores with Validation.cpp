#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	float t,x=0,a;
	int i=0,y=0,j=1;

	for(i=0;;i++){
		if(j==1){
		scanf("%f",&x);

		if(!(x>=0&&x<=10)){
			printf("nota invalida\n");
		}else{
			if(y==0){
				y++;
				t=x;}
			else if(y==1){
				a=(t+x)/2;
				printf("media = %0.2f\n",a);
				j=0;
				y=0;
			}
		}}
		else{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&j);
			if(j==2)
				break;
		}
	}

	return 0;
}

