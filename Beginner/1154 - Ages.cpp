#include <iostream>
#include<cstdio>
using namespace std;

int main() {
		 int i=0,x,s=0;
		 cin>>x;
		 while(x>0){
			 s+=x;
			 cin>>x;
			 i++;
		 }
		 printf("%0.2f\n",(float)s*1.0/i);
	return (0);
}
