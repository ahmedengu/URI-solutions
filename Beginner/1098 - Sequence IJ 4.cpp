#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	for (int i = 0; i <= 20; i+=2) {
		for (int j = 1; j <=3; ++j) {
		if(i==10||i==20||i==0)
		printf("I=%d J=%d\n",i/10,int(i/10)+j);
		else
			printf("I=%0.1f J=%0.1f\n",(float)i/10,(float)j+i/10.0);
	}}
	return 0;
}
