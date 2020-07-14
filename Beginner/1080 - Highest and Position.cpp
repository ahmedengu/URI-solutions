#include <stdio.h>

int main(void) {
int n[100],m,i,mi;
scanf("%d",&n[0]);
m=n[0];
mi=1;
for(i=1;i<100;i++){
	scanf("%d",&n[i]);
	if(n[i]>m){
		m=n[i];
		mi=i+1;
	}
}
printf("%d\n%d\n",m,mi);
return 0;
}
