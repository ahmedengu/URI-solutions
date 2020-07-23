#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x,n,sum=0;
	scanf("%d",&x);
	do{
		scanf("%d",&n);
	}while(n<=0);

	for (int i = x,j=1; j <= n; i++,j++) {
		sum+=i;
	}
	printf("%d\n",sum);
	return 0;
}
