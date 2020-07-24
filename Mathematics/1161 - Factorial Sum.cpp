#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
long long f(int x){
	long long s=1;
	for (int i = 1; i <= x; ++i) {
		s*=i;
	}
	return s;
}
int main() {
	long long s=0;
	int x,y;

	while(scanf("%d",&x)!=EOF&&scanf("%d",&y)!=EOF){
		s=f(x)+f(y);
		printf("%lld\n",s);
	}
	return 0;
}
