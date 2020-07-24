#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int x;
		 cin>>x;
		 for (int i = 1; i <= x; i++) {
			if(x%i==0)
				printf("%d\n",i);
		}

	return (0);
}
