#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int x,t,sum;
	char c[1000000];
	scanf("%d",&x);
	for (int i = 0; i < x; ++i) {
		sum=0;
		scanf("%s",c);
		for (int rr = 0; c[rr]!='\n'&&c[rr]!='\0'; ++rr) {
			t=c[rr]-48;
			switch(t){
			case 1: sum+=2;break;
			case 2:case 3:case 5: sum+=5;break;
			case 4: sum+=4;break;
			case 6:case 9:case 0: sum+=6;break;
			case 7: sum+=3;break;
			case 8: sum+=7;break;
				}
		}

		printf("%d leds\n",sum);
	}
	return 0;
}
