#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x[10],i;
	for(i=0;i<10;i++){
		cin>>x[i];
		
		if(x[i] <= 0)
			x[i]=1;
	}
	for(i=0;i<10;i++){
		printf("X[%d] = %d\n",i,x[i]);
	}
	return 0;
}
