#include <stdio.h>

int main(void) {
	int x,y[10000],i;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&y[i]);
	}
	for(i=0;i<x;i++){
		if(y[i]==0)
			printf("NULL\n");
		else if(y[i]%2==0&&y[i]>0)
			printf("EVEN POSITIVE\n");
		else if(y[i]%2==0&&y[i]<0)
			printf("EVEN NEGATIVE\n");
		else if(y[i]%2==1)
			printf("ODD POSITIVE\n");
		else if(y[i]%2==-1)
			printf("ODD NEGATIVE\n");
	}

	return 0;
}
