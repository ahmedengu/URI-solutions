#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int i,x[20],j;
	for(i=0;i<20;i++){
		cin>>x[i];
	}
	for(i=19,j=0;i>=0;i--,j++){
			printf("N[%d] = %d\n",j,x[i]);
			
	}
	return 0;
}
