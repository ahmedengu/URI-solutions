#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int x[1000],o=-1,m[1000][1000],c,d,p;
	do {
		o++;
		cin>>x[o];
	} while (x[o]!=0);


	for (int i = 0; i < o; ++i) {
		c=1;
		d=0;
			for (int r = 0; r < x[i]; ++r) {

				m[r][0]=c;
				c*=2;
				p=c;
				for (int b = 1; b < x[i]; ++b) {

						m[r][b]=p;
						p*=2;
			}
			}
			d=m[x[i]-1][x[i]-1];
			p=0;
			do {
				d=d/10;
				p++;
			} while (!!(d>0));

		for (int r = 0; r < x[i]; ++r) {
			printf("%*d",p,m[r][0]);
			for (int b = 1; b < x[i]; ++b) {
				printf(" %*d",p,m[r][b]);
		}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
