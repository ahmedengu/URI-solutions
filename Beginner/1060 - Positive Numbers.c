#include <stdio.h>

int main(void) {
	float x;
int i,c=0;
for(i=0;i<6;i++){
	scanf("%f",&x);
	if(x>0)
		c++;
}
printf("%d valores positivos\n",c);
	return 0;
}
