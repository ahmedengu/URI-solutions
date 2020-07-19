#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int x,y,xx,yy,m;


	while(scanf("%d %d %d %d",&x,&xx,&y,&yy),x!=0||y!=0||xx!=0||yy!=0){
	if(x==y&&yy<xx)
	    m=24*60-(xx-yy);
	else if(x==y&&yy>xx)
	    m=yy-xx;
	else if(x<y&&xx>yy)
	    m=((y-x)*60)-(xx-yy);
	else if(x<y&&xx<=yy)
	    m=((y-x)*60)+(yy-xx);
	else
	m=((24-x+y)*60)+(yy-xx);

	printf("%d\n",m);
	}
	return 0;
}
