#include <iostream>
#include<cstdio>
using namespace std;


int main() {
	float x[12][12],c=0;
	int l=0,k=0;
	char s;
	cin>>s;
	for (int i = 0; i < 12; ++i) {
		for (int j = 0; j < 12; ++j) {
			cin>>x[i][j];
		}
	}

	for (int i = 0; i < 11; ++i) {
		for (int j = 1+l; j < 12; ++j) {

		c+=x[i][j];
		k++;
	}
		l++;
	}
	
	switch (s) {
		case 'S':
			printf("%0.1f\n",c);
			break;
		case 'M':
			printf("%0.1f\n",c/k);
			break;
	}
	return 0;
}
