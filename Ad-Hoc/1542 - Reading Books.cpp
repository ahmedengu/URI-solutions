#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main() {

	int q,d,p;
	float r;

	while(scanf("%d",&q),q!=0){
		scanf("%d %d",&d,&p);
		r=(double(q*d)*1.0/-(q-p)+d)*q;

        if ((int)r==1)
            printf ("%d pagina\n", (int)r);
        else
        	printf("%d paginas\n",(int((r))));

	}


	/*int n,x[60],r,f,l,k,i,j;
	while(scanf("%d",&n)==1){
		scanf("%d",&r);
		f=-1;l=-1;k=0;
	for ( i = 0; i < n; ++i) {
		scanf("%d",&x[i]);
		if((f==-1&&x[i]>r)||(k>3&&x[i]>r)||(f!=-1&&x[f]==r&&k>=1)||(f!=-1&&x[f]+x[i-1]<x[i]&&k>1)){
			f=i;
			k=0;
		}else if(x[i]>r){
			l=i;
			k=0;
		}else{
			if(f!=-1&&x[i]<=r){
				k++;
			}
		}
	}
	k=0;j=0;
	for ( i = f; i <= l; ++i) {
		k+=x[i];
		j++;
	}
cout<<f<<l;
	printf("%d",int(k-r*j));
	}*/
	    return 0;
}
