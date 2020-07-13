#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
int x;
scanf("%d",&x);
for (int i = 2; i <= x; ++i) {
	if(i%2==0)
		printf("%d^2 = %d\n",i,i*i);
}
	return 0;
}
