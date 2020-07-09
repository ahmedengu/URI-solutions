#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int n,o,k,t;
	char x[1000];
	scanf("%d",&n);
	while(n>0){
		n--;
		o=0;k=0;t=0;
		scanf("%s",x);
		for (int i = 0; i < strlen(x); ++i) {
			if(x[i]=='<')
				o++;
			else if(x[i]=='>'&&o!=0){
				t++;
				o--;
			}

			if(x[i]==','){
						o=0;
						k=0;

						}
			}



		printf("%d\n",t);

	}
	return 0;
}
