#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
int x,y,s=0;
scanf("%d\n%d",&x,&y);
if(y>x){
	x+=y;
	y=x-y;
	x=x-y;
}
for (int i = y+1; i < x; i++) {
	if(i%2!=0)
		s+=i;

}
printf("%d\n",s);
	return 0;
}
