#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	//Declaramos la variable de tipo array
	int num[5]={1,2,3,4,5};
	int *p;
	p=num;//toma el primer valor del punto
	for(int i=0;i<5;i++){
		cout<<"Elemento "<<i+1<<":"<<*(p+i)<<endl;
	}
}
