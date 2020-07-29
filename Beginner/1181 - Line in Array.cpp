#include <iostream>
#include<cstdio>
using namespace std;


int main() {
	float x[12][12],c=0;
	int l;
	char s;
	cin>>l;
	cin>>s;
	for (int i = 0; i < 12; ++i) {
		for (int j = 0; j < 12; ++j) {
			cin>>x[i][j];
		}
	}
	for (int j = 0; j < 12; ++j) {
		c+=x[l][j];
	}
	switch (s) {
		case 'S':
			printf("%0.1f\n",c);
			break;
		case 'M':
			printf("%0.1f\n",c/12);
			break;
	}
	return 0;
}
