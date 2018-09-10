#include <conio.h>
#include <iostream>

using namespace std;
struct alumno{
	char nombre[50];
	int edad;
}alu[3];

int main(){
	cout<<"**********INGRESE DATOS*********"<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"Ingrese nombre:"<<endl;
		cin.getline(alu[i].nombre,50,'\n');
		cout<<"Ingrese edad:"<<endl;
		cin>>alu[i].edad;
		cout<<endl;
		fflush(stdin);
	}
	
	cout<<"***********MOSTRAR DATOS*************"<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"El nombre "<<i<<":"<<alu[i].nombre<<endl;
		cout<<"La edad "<<i<<":"<<alu[i].edad<<endl<<endl;
	}
}
