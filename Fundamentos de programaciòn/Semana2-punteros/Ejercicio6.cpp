#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(){
		//Declaramos la variable de tipo array
	int num[5]={1,2,3,4,5};
	int *p;
	p=num;//toma el primer valor del punto
	int suma=0;
	for(int i=0;i<5;i++){
		cout<<"Elementos:"<<i<<":"<<*p<<endl;
		suma += *p;
		p++;//se hace pasar a la siguente posición de memoria.
	}
	cout<<endl;
	cout<<"La suma es :"<<suma;
}
