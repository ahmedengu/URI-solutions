#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int x,y,xx,yy,n,s,ss,s1,s2;
	char ch;
	scanf("%d",&n);
	while(n>0){
		n--;
		s=0;
		ss=0;
		scanf("%d / %d %c %d / %d",&x,&y,&ch,&xx,&yy);
		switch(ch){
		case '+':
			s=x*yy+xx*y;
			ss=y*yy;
			break;
		case '-':
			s=x*yy-xx*y;
			ss=y*yy;
			break;
		case '*':
			s=xx*x;
			ss=y*yy;
			break;
		case '/':
			s=x*yy;
			ss=xx*y;
			break;
		}
		s1=s;s2=ss;
		for (int i = 1000; i > 0; i--) {
			if(s%i==0&&ss%i==0){
				s1=s/i;
				s2=ss/i;
				break;
			}
		}
		printf("%d/%d = %d/%d\n",s,ss,s1,s2);

	}
	return 0;
}
