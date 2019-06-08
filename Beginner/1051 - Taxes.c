#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main() {

	float x;
	scanf("%f",&x);

	if (x<=2000.00) {
printf("Isento\n");
	} else if (x<3000.00) {
		printf("R$ %0.2f\n",(x-2000)*.08);
	} else if (x<4500.00) {
		printf("R$ %0.2f\n",(1000*.08)+(x-3000.00)*.18);
	}  else {
		printf("R$ %0.2f\n",((1000*.08)+(1500)*.18)+(x-4500)*.28);
	}

    return 0;
}
