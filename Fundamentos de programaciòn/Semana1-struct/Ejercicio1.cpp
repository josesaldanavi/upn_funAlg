#include <conio.h>
#include <iostream>

using namespace std;

struct alumno{
	char nombre[50];
	int edad;
}alu;

int main(){
	cout<<"*******INGRESAR DATOS********"<<endl;
	cout<<"Ingrese nombre:";
	cin>>alu.nombre;
	cout<<"Ingrese la edad:";
	cin>>alu.edad;
	cout<<endl;
	cout<<"*****MOSTRAR DATOS******"<<endl;
	cout<<"El nombre es:"<<alu.nombre<<endl;
	cout<<"La edad es:"<<alu.edad;
	
}
