#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	float x,y,a[10000];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) {
		scanf("%f %f",&x,&y);
		a[i]=x/y;
	}

	for (int i = 0; i < n; ++i) {
			if(a[i]!=-INFINITY&&a[i]!=INFINITY)
				printf("%0.1f\n",a[i]);
			else
				printf("divisao impossivel\n");
	}
	return 0;
}

