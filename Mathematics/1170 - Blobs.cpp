#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>


using namespace std;

int main() {
	int n,d;
	float x;
	scanf("%d",&n);
	while(n>0){
		n--;
		d=0;
		scanf("%f",&x);
		
		while(x>1){
			x/=2;
			d++;
		}
		printf("%d dias\n",d);
	}
	return 0;
}
