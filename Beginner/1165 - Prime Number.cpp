#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int n,x,i,s;
	cin>>n;
	
	while(n>0){
		n--;
		s=0;
		cin>>x;
		for(i=2;i<x;i++){
			if(x%i==0)
				s++;
		}
		if(s==0)
			printf("%d eh primo\n",x);
		else
			printf("%d nao eh primo\n",x);
		}
		
	return 0;
}
