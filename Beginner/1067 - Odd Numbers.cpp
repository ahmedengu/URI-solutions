#include <stdio.h>

int main(void) {
int x,i;
scanf("%d",&x);
for(i=1;i<=x;i++){
	if(i%2==1)
		printf("%d\n",i);
}
	return 0;
}
