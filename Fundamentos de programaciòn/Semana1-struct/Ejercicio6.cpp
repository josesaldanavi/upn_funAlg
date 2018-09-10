#include <conio.h>
#include <iostream>

using namespace std;

struct alumno{
	char nombre[50];
	int edad;
};
//punto de la estructura alumno, modo arreglo
struct alumno *ptr[3];

int main(){
	cout<<"************INGRESE DATOS*************"<<endl;
	for(int i=0;i<3;i++){
		ptr[i]=new(struct alumno);
		cout<<"Ingrese nombre:";
		cin>>ptr[i]->nombre;
		cout<<"Ingrese edad:";
		cin>>ptr[i]->edad;
		cout<<endl;
	}
	cout<<"************MOSTRAR DATOS*************"<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"Nombre "<<i<<":"<<ptr[i]->nombre<<endl;
		cout<<"Edad "<<i<<":"<<ptr[i]->edad<<endl<<endl;
	}
}
