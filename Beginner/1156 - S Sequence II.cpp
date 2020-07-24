#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 float s=1;
		 for (int i = 3,j=2; i <= 39; i+=2,j*=2) {
			s+=i*1.0/j;
		}
		 printf("%0.2f\n",s);
	return (0);
}
