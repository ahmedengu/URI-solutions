#include <iostream>
#include<cstdio>
#include <cstdlib>


using namespace std;

int main() {
		long long x,y,sum;
		int f,xx,yy,ss,k,c;

		scanf("%lld %lld",&x,&y);

		while(x!=0||y!=0){
			f=0;
			if(x!=0&&y!=0){

			sum=x+y;
			k=0;c=0;
			while(sum!=0||x!=0||y!=0){
				xx=x%10;
				yy=y%10;
				ss=sum%10;
				x/=10;
				y/=10;
				sum/=10;

				if(k!=0&&(xx!=0||yy!=0)){


					if(xx+yy+k>=10&&xx+yy!=ss){
						k=1;f++;
					}else{
						k=0;
					}
				}else{
					if(xx+yy>=10&&xx+yy!=ss){
						f++;
						k=1;
					}
				}
			}
			}

			if(f==0)
				printf("No carry operation.\n");
			else if(f==1)
				printf("%d carry operation.\n",f);
			else
				printf("%d carry operations.\n",f);

			scanf("%lld %lld",&x,&y);
		}
	    return 0;
}
