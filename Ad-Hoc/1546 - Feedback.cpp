#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int n,x,k;
	scanf("%d",&n);
	while(n>0){
		n--;
		scanf("%d",&k);
		while(k>0){
			k--;
			scanf("%d",&x);
			switch(x){
			case 1:
				printf("Rolien\n");
				break;
			case 2:
				printf("Naej\n");
				break;
			case 3:
				printf("Elehcim\n");
				break;
			case 4:
				printf("Odranoel\n");
				break;
			}
		}
	}
	return 0;
}
