#include <stdio.h>

int main(void) {
	int x,i,j,c=1;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=c;j<c+3;j++){
			printf("%d ",j);
		}
		printf("PUM\n");
		c=j+1;
	}
	
	return 0;
}
