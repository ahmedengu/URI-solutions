#include <stdio.h>

int main(void) {
	int x,y,i;
	scanf("%d\n%d",&x,&y);
	if(x>y){
		x+=y;
		y=x-y;
		x=x-y;
	}
	for(i=x+1;i<y;i++){
		if(i%5==2||i%5==3)
			printf("%d\n",i);
	}

	return 0;
}
