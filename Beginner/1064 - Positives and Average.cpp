#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
    int c=0;
    float x,sum=0;
    for (int i = 0; i < 6; i++) {
        cin>>x;
        if(x>0){
         c++;
         sum+=x;
        }

    }
    sum =sum*1.0/c;
    printf("%d valores positivos\n%0.1f\n",c,sum);
	return 0;
}
