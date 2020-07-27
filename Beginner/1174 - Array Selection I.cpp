#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int i;
	float x[100];
	for(i=0;i<100;i++){
		cin>>x[i];
	}
	for(i=0;i<100;i++){
		if(x[i]<=10)
			if(x[i]==0||x[i]-int(x[i])==0)
			printf("A[%d] = %d\n",i,(int)x[i]);
			else
			printf("A[%d] = %0.1f\n",i,x[i]);
	}
	return 0;
}
