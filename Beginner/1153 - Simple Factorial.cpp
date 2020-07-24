#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int x,sum=1;
		 cin>>x;
		 for (int i = x;i>0;i--) {
			sum*=i;
		}
		 printf("%d\n",sum);
	return (0);
}
