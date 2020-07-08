#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
    int c=0,x;
    for (int i = 0; i < 5; i++) {
        cin>>x;
        if(x%2==0){
         c++;
        }

    }

    printf("%d valores pares\n",c);
	return 0;
}
