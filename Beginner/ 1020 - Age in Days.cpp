#include <stdio.h>
#include<math.h>
int main(void) {
	int N;
	scanf("%d",&N);
printf("%d ano(s)\n",N/365);
printf("%d mes(es)\n",N%365/30);
printf("%d dia(s)\n",N%365%30);
	return 0;
}
