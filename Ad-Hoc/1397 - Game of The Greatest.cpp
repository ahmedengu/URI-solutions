#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int x,y,n,t,tt;
	scanf("%d",&n);
	while(n!=0){
		tt=0;t=0;
		for (int i = 0; i < n; ++i) {
			scanf("%d %d",&x,&y);
			if(x>y){
				tt++;
			}else if(x<y)
				t++;
		}
		printf("%d %d\n",tt,t);
		scanf("%d",&n);
	}
	return 0;
}
