#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int x;
		 cin>>x;
		 for (int i = 0,c=1,j=1,n=0; i < x||(x==0&&i==0); ++i) {
			if(i==0)
				printf("0");
			else if(i==1)
				printf(" 1");
			else
			{
				c=j+n;
				printf(" %d",c);
				n=j;
				j=c;
			}
		}
		 printf("\n");
	return (0);
}
