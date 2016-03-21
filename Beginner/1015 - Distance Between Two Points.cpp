#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void) {

int x1,x2,y1,y2;
scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
printf("%0.4f\n", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
return 0;
}
