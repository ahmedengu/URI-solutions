#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int n,a,b,i,a1,b1;
	float q1,q2;
	cin>>n;
	
	while(n>0){
		n--;
		cin>>a>>b>>q1>>q2;
	for(i=0;a<=b&&(i<=100);i++){
		a1=a*q1/100;
	b1=b*q2/100;
		a+=a1;
		b+=b1;
	}
	if(i<=100)
		printf("%d anos.\n",i);
	else
		printf("Mais de 1 seculo.\n");
		}
	return 0;
}
