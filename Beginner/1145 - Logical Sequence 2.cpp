#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x,y,j=1,t;
	cin>>x>>y;
	t=x;
	for (int i = 1; j <= y; ++i) {
		for (; j <= t; ++j) {
			printf("%d",j);
			if(j!=t)
				printf(" ");
		}
		printf("\n");
		t=j+x-1;
	}
	return 0;
}
