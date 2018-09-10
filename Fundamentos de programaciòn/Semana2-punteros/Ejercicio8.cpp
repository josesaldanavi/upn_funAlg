#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(){
		//Declaramos la variable de tipo array
	int num[5]={121,241,323,124,425};
	int *p;
	p=num;//toma el primer valor del punto
	int me=*p;
	for(int i=0;i<5;i++){
		if(me>=*p){
			me=*p;
		}
		p++;
	}
	cout<<"El elemento menor es:"<<me;
}
