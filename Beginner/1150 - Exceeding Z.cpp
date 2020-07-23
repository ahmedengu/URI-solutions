#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x,n,sum=0,i;
	scanf("%d",&x);
	do{
		scanf("%d",&n);
	}while(n<=x);
i=x-1;
x=0;
	do {
		i++;
		x++;
		sum+=i;
	} while (sum<=n);
	printf("%d\n",x);
	return 0;
}
