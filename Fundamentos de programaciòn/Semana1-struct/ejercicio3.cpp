#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[50];
	int edad;
}alu;

int main(){
	cout<<"-------INGRESE DATOS--------"<<endl<<endl;
	cout<<"ingrese nombre:";
	cin.getline(alu.nombre,50,'\n');
	cout<<"Ingrese edad:";
	cin>>alu.edad;
	cout<<endl;
	cout<<"-----------MOSTRAR DATOS----------"<<endl<<endl;
	cout<<"Nombre:"<<alu.nombre<<endl;
	cout<<"Edad:"<<alu.edad;
}
