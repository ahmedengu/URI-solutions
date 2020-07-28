#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	double t,x[100];
	int i;
	cin>>t;
	t=t*1.0;
	x[0]=t;
	for(i=1;i<100;i++){
		x[i]=x[i-1]/2;
	}
	
	for(i=0;i<100;i++){
		printf("N[%d] = %0.4f\n",i,x[i]);
	}
	return 0;
}
