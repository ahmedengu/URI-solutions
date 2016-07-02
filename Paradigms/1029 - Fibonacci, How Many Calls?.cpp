#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;
int fab(int x,int a[]){
	if(x==0){a[0]++;return 0;}
	else if(x==1){a[0]++;return 1;}
	else{
		a[0]++;
		return fab(x-2,a)+fab((x-1),a);
	}
}
int main() {
	int n,k[2],x;
	scanf("%d",&n);
	while(n>0){
		n--;

		scanf("%d",&x);
		k[0]=-1;
		k[1]=fab(x,k);
		printf("fib(%d) = %d calls = %d\n",x,k[0],k[1]);
	}

	return 0;
}
