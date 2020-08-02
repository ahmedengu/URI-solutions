#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>


using namespace std;

int main() {
	int n;
	unsigned long a,b,t,k,c;
	scanf("%d",&n);
	while(n>0){
		c=1;
	   n--;
		scanf("%ld %ld",&a,&b);
		k=a;
		t=b;
		if(a>=b){
			c=0;
		while(b!=0){
			k=a%10;
			a/=10;
			t=b%10;
			b/=10;
			if(t!=k){
				c=1;
				break;
			}

		}
		}
		if(c==1)
			printf("nao encaixa\n");
		else
			printf("encaixa\n");

	}
	return 0;
}
