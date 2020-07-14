#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	int x;
	float s[10000],x1,x2,x3;
	cin>>x;
	for (int i = 0; i < x; ++i) {
		cin>>x1>>x2>>x3;
		s[i]=((x1*2)+(x2*3)+(x3*5))*1.0/10;

	}
	for (int i = 0; i < x; ++i) {
		printf("%0.1f\n",s[i]);
	}
	return 0;
}
