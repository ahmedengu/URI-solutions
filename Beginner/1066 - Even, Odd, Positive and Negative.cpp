#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
    int e=0,x,o=0,p=0,n=0;
    for (int i = 0; i < 5; i++) {
        cin>>x;
        if(x%2==0)
         e++;
        else
        	o++;
        if(x>0)
        	p++;
        else if(x<0)
        	n++;

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);
	return 0;
}
