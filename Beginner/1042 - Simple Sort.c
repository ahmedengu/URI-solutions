#include <stdio.h>
#include <math.h>
int main(void) {
int x1 ,x2,x3;
scanf("%d %d %d",&x1,&x2,&x3);
if(x1<x2&&x1<x3){
	printf("%d\n",x1);
	if(x2<x3){
		printf("%d\n",x2);
	}else{
		printf("%d\n",x3);
	}
		if(x2>x3){
		printf("%d\n",x2);
	}else if(x3>x2){
		printf("%d\n",x3);
	}
}
else if(x2<x3){
	printf("%d\n",x2);
	if(x1<x3){
		printf("%d\n",x1);
	}else{
		printf("%d\n",x3);
	}
		if(x1>x3){
		printf("%d\n",x1);
	}else if(x3>x2){
		printf("%d\n",x3);
	}
}
else{
	printf("%d\n",x3);
	if(x2<x1){
		printf("%d\n",x2);
	}else{
		printf("%d\n",x1);
	}
		if(x2>x1){
		printf("%d\n",x2);
	}else if(x1>x2){
		printf("%d\n",x1);
	}
}
printf("\n");
printf("%d\n%d\n%d\n",x1,x2,x3);
return 0;
}
