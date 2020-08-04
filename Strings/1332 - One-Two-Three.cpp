#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int o,t,n,f;
	char c[1000],one[]="one",two[]="two";
	scanf("%d",&n);
	while(n>0){
		n--;
		o=0;t=0;
		scanf("%s",c);
		if(strlen(c)==5)
			f=3;
		else if(strlen(c)==3){
			for (int j = 0; j < 3; ++j) {
				if(two[j]==c[j])
					t++;
				if(one[j]==c[j])
					o++;
			}
			if(o>1)
				f=1;
			else if(t>=1)
				f=2;
		}
		printf("%d\n",f);

	}
	return 0;
}
