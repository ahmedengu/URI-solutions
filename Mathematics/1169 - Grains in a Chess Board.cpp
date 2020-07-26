#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>


using namespace std;

int main() {
	unsigned long long  sum,lo;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>x;
		sum=1;lo=0;
		for (int j = 0; j < x; ++j) {
			lo+=sum;
			sum*=2;

		}
		sum=(lo/12000.0);
		printf("%lld kg\n",sum);
	}
	return 0;
}
