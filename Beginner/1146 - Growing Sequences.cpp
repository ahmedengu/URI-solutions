#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x[10000],i=-1;
	do {
		i++;
		cin>>x[i];
	} while (x[i]!=0);

	for (int j = 0; j < i; ++j) {
		for (int q = 1; q <=x[j]; ++q) {
			printf("%d",q);
			if(q!=x[j])
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
