#include <iostream>
#include<cstdio>
using namespace std;
void par(int a[],int s){
	for (int i = 0; i <= s; ++i) {
		printf("par[%d] = %d\n",i,a[i]);
	}
}
void impar(int a[],int s){
	for (int i = 0; i <= s; ++i) {
			printf("impar[%d] = %d\n",i,a[i]);
		}
}
int main() {
	int p[5],im[5],x,pp=-1,ii=-1;
	for (int i = 0; i < 15; ++i) {
		cin>>x;
		if(x%2==0){
			if(pp<4){
				pp++;
				p[pp]=x;
			}else{
				par(p,pp);
				pp=0;
				p[pp]=x;
			}
		}else{
			if(ii<4){
				ii++;
				im[ii]=x;
			}else{
				impar(im,ii);
				ii=0;
				im[ii]=x;
		}
	}
	}

		impar(im,ii);
		par(p,pp);

	return 0;
}
