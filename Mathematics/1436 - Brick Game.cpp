#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>

using namespace std;

int main() {
	int a[15]={0};
	scanf("%d",&a[14]);
	while(a[14]>0){
		a[14]--;
		scanf("%d",&a[13]);
		if(a[13]>1){
		for(a[12]=0;a[12]<a[13]&&a[12]<10;a[12]++){
			scanf("%d",&a[a[12]]);
		}
		a[11]++;

		printf("Case %d: %d\n",a[11],a[int(a[13]/2)]);

		}
		}

	return 0;
}
