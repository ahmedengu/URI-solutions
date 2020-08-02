#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main() {

	int x,n=0,s=0,y;
	char ch[100];
	while(fgets(ch,100,stdin)){
		n++;
		if(scanf("%d %d",&x,&y)>=1){
		s+=x;	
			}
	
	}
printf("%0.1f\n",double(1.0*s/n));

	    return 0;
}
