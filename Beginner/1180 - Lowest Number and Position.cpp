#include <iostream>
#include<cstdio>
using namespace std;


int main() {
	int n,x[1000],p,l;
	cin>>n;

	if(n>0){
		cin>>x[0];
		p=0;
		l=x[0];
	}

	for (int i = 1; i < n; ++i) {
		cin>>x[i];
		if(x[i]<l){
			p=i;
			l=x[i];
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n",l,p);
	return 0;
}
