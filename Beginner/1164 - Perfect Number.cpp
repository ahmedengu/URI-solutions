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
		for(i=1;i<x;i++){
			if(x%i==0)
				s+=i;
		}
		if(s==x)
			printf("%d eh perfeito\n",x);
		else
			printf("%d nao eh perfeito\n",x);
		}
		
	return 0;
}
