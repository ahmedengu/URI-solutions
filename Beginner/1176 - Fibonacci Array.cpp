#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	long long x[10000],n[10000],s,p=0,o=1,c=0;
	int i,t,j;
	cin>>t;
	for(i=0;i<t;i++){
		p=0;o=1;c=0;
		cin>>s;
		for(j=0;j<=s;j++){
			if(j==0)
			c=0;
			else if(j==1)
			c=1;
			else{
				c=p+o;
				p=o;
				o=c;
			}
		}
		x[i]=c;
		n[i]=s;
	}
	for(i=0;i<t;i++){
		printf("Fib(%lld) = %lld\n",n[i],x[i]);
	}
	
	return 0;
}
