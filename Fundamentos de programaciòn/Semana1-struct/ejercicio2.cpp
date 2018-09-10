#include <conio.h>
#include <iostream>

using namespace std;
struct alumno{
	char nombre[50];
	int edad;
}alu[3];

int main(){
	cout<<"-----INGRESE DATOS--------"<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"Ingrese nombre:";
		cin>>alu[i].nombre;
		cout<<"Ingrese edad:";
		cin>>alu[i].edad;
		cout<<endl;
	}
	cout<<"*******Mostrar datos********"<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"Nombre:"<<alu[i].nombre<<endl;
		cout<<"Edad:"<<alu[i].edad<<endl<<endl;
	}
}
