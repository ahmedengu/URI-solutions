#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	int x,n,c=0,r=0,s=0;
	char f;
	cin>>x;
	for (int i = 0; i < x; ++i) {
		cin>>n>>f;
		if(f=='C'&&n>=1&&n<=15){
			c+=n;

		}else if(f=='R'&&n>=1&&n<=15){
			r+=n;

		}else if(f=='S'&&n>=1&&n<=15){
			s+=n;

		}
	}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",c+s+r,c,r,s);
	printf("Percentual de coelhos: %0.2f %\nPercentual de ratos: %0.2f %\nPercentual de sapos: %0.2f %\n",(c*100.0/(c+s+r)),(r*100.0/(c+s+r)),(s*100.0/(c+s+r)));

	return 0;
}
