#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main() {

	char x[100],y[100],z[100];
	fgets(x,100,stdin);
	fgets(y,100,stdin);
	fgets(z,100,stdin);

	if (strcmp(x,"vertebrado\n")==0&&strcmp(y,"ave\n")==0&&strcmp(z,"carnivoro\n")==0) {
	printf("aguia\n");
	}
	else if (strcmp(x,"vertebrado\n")==0&&strcmp(y,"ave\n")==0&&strcmp(z,"onivoro\n")==0) {
	printf("pomba\n");
	}
	else if (strcmp(x,"vertebrado\n")==0&&strcmp(y,"mamifero\n")==0&&strcmp(z,"onivoro\n")==0) {
	printf("homem\n");
	}
	else if (strcmp(x,"vertebrado\n")==0&&strcmp(y,"mamifero\n")==0&&strcmp(z,"herbivoro\n")==0) {
	printf("vaca\n");
	}
	else if (strcmp(x,"invertebrado\n")==0&&strcmp(y,"inseto\n")==0&&strcmp(z,"hematofago\n")==0) {
	printf("pulga\n");
	}
	else if (strcmp(x,"invertebrado\n")==0&&strcmp(y,"inseto\n")==0&&strcmp(z,"herbivoro\n")==0) {
	printf("lagarta\n");
	}
	else if (strcmp(x,"invertebrado\n")==0&&strcmp(y,"anelideo\n")==0&&strcmp(z,"hematofago\n")==0) {
	printf("sanguessuga\n");
	}
	else if (strcmp(x,"invertebrado\n")==0&&strcmp(y,"anelideo\n")==0&&strcmp(z,"onivoro\n")==0) {
	printf("minhoca\n");
	}


    return 0;
}
