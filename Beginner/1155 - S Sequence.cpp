#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 float s=0;
		 for (int i = 1; i <= 100; ++i) {
			s+=1.0/i;
		}
		 printf("%0.2f\n",s);
	return (0);
}
