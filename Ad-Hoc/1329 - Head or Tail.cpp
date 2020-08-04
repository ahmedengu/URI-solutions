#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>


using namespace std;

int main() {
	int x,y,n,t;
	while(scanf("%d",&n),n!=0){
		x=0,y=0;
		for (int i = 0; i < n; ++i) {
			scanf("%d",&t);
			if(t==1){
				x++;
			}else if(t==0){
				y++;
			}
		}
		printf("Mary won %d times and John won %d times\n",y,x);
	}
	return 0;
}
