#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int n,s=0;
		 cin>>n;

		 while(n!=0){
			 s=0;
			 for (int i = 0,j=n; i < 5; j++) {
				if(j%2==0){
					s+=j;
					i++;
				}
			}
			 printf("%d\n",s);
			 cin>>n;
		 }

	return (0);
}
