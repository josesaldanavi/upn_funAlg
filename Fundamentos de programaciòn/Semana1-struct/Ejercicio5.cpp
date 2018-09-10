#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	char nombre[50];
	int edad ;
};
//puntero para la estructura alumno
struct alumno *ptr;

int main(){
	cout<<"*******INGRESE DATOS***********"<<endl<<endl;
	ptr=new(struct alumno);
	cout<<"Ingrese nombre:";
	cin>>ptr->nombre;
	cout<<"Ingrese edad:";
	cin>>ptr->edad;
	cout<<endl;
	cout<<"**********MOSTRAR DATOS************"<<endl<<endl;
	cout<<"nombre:"<<ptr->nombre<<endl;
	cout<<"edad:"<<ptr->edad;
}
