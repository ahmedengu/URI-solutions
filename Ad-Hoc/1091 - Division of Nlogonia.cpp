#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main() {

	int k,n,m,x,y;
	while(scanf("%d",&k),k!=0){
		scanf("%d %d",&n,&m);
		while(k>0){
			k--;
			scanf("%d %d",&x,&y);
			if(n==x||m==y)
				printf("divisa\n");
			else if(x>n&&y>m)
				printf("NE\n");
			else if(x<n&&y>m)
				printf("NO\n");
			else if(x<n&&y<m)
				printf("SO\n");
			else if(x>n&&y<m)
				printf("SE\n");
		}
	}
	    return 0;
}
