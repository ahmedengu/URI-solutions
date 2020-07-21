#include <stdio.h>

int main(void) {
	int x,y,sum=0,i;
	scanf("%d %d",&x,&y);
	if(x>y){
		x+=y;
		y=x-y;
		x=x-y;
	}
	for(i=x;i<=y;i++){
		if(i%13!=0)
			sum+=i;	
	}
	printf("%d\n",sum);
	return 0;
}
