#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){

	int x,y,a[10000],i=-1;
	do {
		i++;
		scanf("%d %d",&x,&y);
		if(x>0&&y>0)
			a[i]=1;
		else if(x<0&&y>0)
			a[i]=2;
		else if(x<0&&y<0)
			a[i]=3;
		else if(x>0&&y<0)
			a[i]=4;
	} while (x!=0&&y!=0);

	for (x = 0; x <i; ++x) {
		switch (a[x]) {
			case 1:
				printf("primeiro\n");
				break;
			case 2:
				printf("segundo\n");
				break;
			case 3:
				printf("terceiro\n");
				break;
			case 4:
				printf("quarto\n");
		}
	}
	return 0;
}

