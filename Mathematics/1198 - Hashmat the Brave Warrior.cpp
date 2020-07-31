#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>


using namespace std;

int main() {
	long long x,y,s;
	while(scanf("%lld %lld",&x,&y)!=EOF){
		s=abs(x-y);
		printf("%lld\n",s);
	}
	return 0;
}
