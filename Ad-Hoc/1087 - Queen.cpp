#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int x,xx,y,yy;
	cin>>x>>y>>xx>>yy;

	while(x!=0||y!=0||xx!=0||yy!=0){
		if(x==xx&&y==yy)
			cout<<"0"<<endl;
		else if(x==xx||y==yy)
			cout<<"1\n";
		else if(abs(xx-x)==abs(yy-y))
			cout<<"1\n";
		else
			cout<<"2\n";
		cin>>x>>y>>xx>>yy;
	}
	return 0;
}
