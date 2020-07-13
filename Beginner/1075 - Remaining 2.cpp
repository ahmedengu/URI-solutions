#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>

using namespace std;


int main() {
int x;
scanf("%d",&x);
if(x>2){
for (int i = 0; i < 10000-1; i++) {
	if(i%x==0)
		printf("%d\n",i+2);
}}

    return 0;
}
