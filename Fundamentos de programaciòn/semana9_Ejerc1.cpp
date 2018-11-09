#include<iostream>
#include<fstream>
#include <string>

using namespace std;

struct alumno{
	char nombre[50];
	int telefono;
	char correo[50];
};
struct alumno alu;
int main(){
	fstream archivo("Alumno.txt",ios::out);
	int q;
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>q;
	if(!archivo){
		cout<<"No se encuentra el archivo";
	}else{
	
		for(int i=0;i<q;i++){
			cout<<"Ingrese el nombre del alumno "<<i+1<<":";
			cin>>alu.nombre;
			cout<<"Ingrese el telefono del alumno: "<<i+1<<":";
			cin>>alu.telefono;
			cout<<"Ingrese el correo del alumno "<<i+1<<":";
			cin>>alu.correo;
		}
	
		cout<<"\t"<<"------------------Salida de datos--------------------"<<"\t";
	
		for(int i=0;i<q;i++){
			cout<<"---------------DATOS"<<i+1<<"--------------"<<endl;
			cout<<alu.nombre<<endl;
			cout<<alu.telefono<<endl;
			cout<<alu.correo<<endl;
		}
	}
}
