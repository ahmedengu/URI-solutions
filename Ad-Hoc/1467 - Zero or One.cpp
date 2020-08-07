#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		if(a!=b&&a!=c)
			printf("A\n");
		else if(b!=a&&b!=c)
			printf("B\n");
		else if(c!=a&&c!=b)
			printf("C\n");
		else
			printf("*\n");
	}
	return 0;
}
