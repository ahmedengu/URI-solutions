#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int i,t,x[1000],j;
	cin>>t;
	
	for(i=0,j=0;i<1000;i++,j++){
		if(j==t)
			j=0;
		x[i]=j;
	}
	
	for(i=0;i<1000;i++){
		printf("N[%d] = %d\n",i,x[i]);
	}
	return 0;
}
