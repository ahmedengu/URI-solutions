#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int a;

	while(scanf("%d",&a)==1&&a!=EOF){
		if(a==0)
			printf("vai ter copa!\n");
		else
			printf("vai ter duas!\n");
	}

	return 0;
}
