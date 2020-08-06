#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int x[1000],o=-1,m[1000][1000],c=0,d=0;
	do {
		o++;
		cin>>x[o];
	} while (x[o]!=0);

	for (int i = 0; i < o; ++i) {
		c=0,d=0;
		for (int j = 0; j < x[i]; ++j) {
			c++;
			for (int r = d; r < x[i]-d; ++r) {
				for (int b = d; b < x[i]-d; ++b) {
					m[r][b]=c;
			}
			}
			d++;
		}

		for (int r = 0; r < x[i]; ++r) {
			printf("%3d",m[r][0]);
			for (int b = 1; b < x[i]; ++b) {
				printf(" %3d",m[r][b]);
		}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
