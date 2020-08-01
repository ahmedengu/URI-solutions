#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int c,k,f,n,x[1000];
	scanf("%d",&c);
	while(c>0){
		c--;k=0;f=0;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i) {
			scanf("%d",&x[i]);
			k+=x[i];
		}
		k/=1.0*n;
		for (int i = 0; i < n; ++i) {
			if(x[i]>k)
				f++;
		}

		printf("%0.3f%%\n",((1.0*f)/n)*100);
	}
	return 0;
}
