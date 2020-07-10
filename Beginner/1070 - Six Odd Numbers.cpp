#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int x,i,c=0;
	scanf("%d",&x);
	i=x;
while(c!=6){
	if(i%2==1){c++;
		printf("%d\n",i);
		}
	i++;
}

	return 0;
}
