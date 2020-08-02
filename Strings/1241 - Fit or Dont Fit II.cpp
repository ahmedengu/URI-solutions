#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
		string x,y;
		int n;
		bool f;
cin>>n;
		while(n!=0){
			cin>>x>>y;
			n--;
			f=1;
			if(y.length()<=x.length()){
				f=0;
			for (int i = y.length()-1,j=x.length()-1; i>=0; i--,j--) {
				if(x[j]!=y[i]){
					f=1;
				break;}

			}
			}
			if(f==1)
				printf("nao encaixa\n");
			else
				printf("encaixa\n");
		}
	    return 0;
}
