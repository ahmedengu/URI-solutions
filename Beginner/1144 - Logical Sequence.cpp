#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x;
	cin>>x;
	for (int i = 1; i <= x; ++i) {
		printf("%d %d %d\n",i,i*i,i*i*i);
		printf("%d %d %d\n",i,i*i+1,i*i*i+1);
	}
	return 0;
}
