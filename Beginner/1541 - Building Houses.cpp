#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	while(a!=0){
		cin>>b>>c;
		printf("%d\n",int(trunc(sqrt(((a*b)*100)/c))));
		cin>>a;
	}

	return 0;
}
