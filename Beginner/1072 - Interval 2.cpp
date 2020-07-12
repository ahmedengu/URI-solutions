#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
    int in=0,x,o=0,n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x;
        if(x>=10&&x<=20)
        	in++;
        else
        	o++;

    }

    printf("%d in\n%d out\n",in,o);
	return 0;
}
