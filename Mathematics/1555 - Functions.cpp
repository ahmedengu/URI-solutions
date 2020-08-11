#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;
void r(int x[]){
	x[3]=(3*x[1])*(3*x[1])+x[2]*x[2];
	return;
}
void b(int x[]){
	x[4]=2*((x[1])*(x[1]))+(5*x[2])*(5*x[2]);
	return;
}
void c(int x[]){
	x[5]=(-100)*(x[1])+x[2]*x[2]*x[2];
	return;
}
int main() {
	int x[6];
	scanf("%d",&x[0]);
	while(x[0]>0){
		x[0]--;
		scanf("%d %d",&x[1],&x[2]);
		r(x);
		b(x);
		c(x);
		if(x[3]>x[4]&&x[3]>x[5])
			printf("Rafael ganhou\n");
		else if(x[4]>x[5])
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
	}
	return 0;
}
