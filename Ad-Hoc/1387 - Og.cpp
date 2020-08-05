#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int x,y;
	scanf("%d %d",&x ,&y);
	while(x!=0||y!=0){
		printf("%d\n",x+y);
		scanf("%d %d",&x ,&y);
	}
	return 0;
}
