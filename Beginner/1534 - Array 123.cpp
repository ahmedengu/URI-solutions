#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int x[1000],o=0,m[1000][1000],c,p;

	while(scanf("%d",&x[o])==1&&x[o]!=EOF){
		o++;
	}


	for (int i = 0; i < o; ++i) {
			for (int r = 0; r < x[i]; ++r) {
				for (int b = 0; b < x[i]; ++b) {
						m[r][b]=3;

			}
			}
		c=0;
		p=x[i]-1;
			for (int w = 0; w < x[i]; ++w) {
				m[w][c]=1;
				m[w][p]=2;
				c++;
				p--;
			}


		for (int r = 0; r < x[i]; ++r) {
			for (int b = 0; b < x[i]; ++b) {
			printf("%d",m[r][b]);
		}
			printf("\n");
		}
	}

	return 0;
}
