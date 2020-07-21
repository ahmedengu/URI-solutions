#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int x,y,g=0,in=0,gr=0,e=0,n=1;
	do {
		cin >>x>>y;
		if(x==y){
			e++;g++;}
		else if(x<y){
			gr++;g++;}
		else if(x>y){
			in++;g++;}
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>n;
	} while (n==1);
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",g,in,gr,e);
	if(in==gr)
		cout<<"Nao houve vencedor"<<endl;
	else if(in>gr)
		cout<<"Inter venceu mais"<<endl;
	else if(in<gr)
		cout<<"Gremio venceu mais"<<endl;

	return 0;
}
