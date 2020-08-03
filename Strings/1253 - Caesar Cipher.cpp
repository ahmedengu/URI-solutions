#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main() {
	int x,n;
	char ch[55],c[1];
	scanf("%d",&n);
	while(n>0){
		n--;
		cin>>ch;
		gets(c);
		cin>>x;
		if(x>0){
		for (int i = 0; i < strlen(ch); ++i) {
			if(ch[i]-x>=65&&ch[i]-x<=90)
				ch[i]=char(ch[i]-x);

			else
				ch[i]=char('Z' - abs('A'-(ch[i]-x+1)));
		}

		}cout<<ch<<endl;
	}

	/*	cout<<char(int('A') + int(90-27))<<int('Z');
		/*int n,x,i;
		char a[55];
		scanf("%d",&n);
		while(n>0){
			n--;
			scanf("%s",a);
			scanf("%d",&x);
			for (i = 0; i < strlen(a); ++i) {
				if(x+int(a[i])>=0)
			}

		}*/
/*	for (int i = 0; i <= 25; ++i) {
		printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n%d\n",i);
	}*/
	    return 0;
}
