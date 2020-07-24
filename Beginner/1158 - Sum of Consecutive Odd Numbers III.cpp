#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int x,y,n,s=0;
		 cin>>n;

		 while(n>0){
			 s=0;
			 n--;
			 cin>>x>>y;
			 for (int i = 0,j=x; i < y; j++) {
				if(j%2!=0){
					s+=j;
					i++;
				}
			}
			 printf("%d\n",s);
		 }

	return (0);
}
