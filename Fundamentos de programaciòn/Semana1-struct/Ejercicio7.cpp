/*Desarrolle una aplicacion utilizando una estructura y un puntero
a dicha estructura de tipo arreglo.La estructura debe de contener
la nota de examen parcial, final y nota de practicas,se pide:
* la suma de los examenes parciales.
* El promedio de los examenes finales.
* La mayor de las notas de practicas

*/
#include <conio.h>
#include <iostream>

using namespace std;

struct notas{
	int notasPa;
	int notasFi;
	int notasPr;
};
struct notas *ptr[3];

int main(){
	for(int i=0;i<3;i++){
		cout<<"INGRESO DE DATOS DEL ALUMNO"<<i+1<<endl;
		ptr[i]=new(struct notas);
		cout<<"La nota practica de el alumno "<<i+1<<" : ";
		cin>>ptr[i]->notasPr;
		cout<<"La nota final de el alumno "<<i+1<<" : ";
		cin>>ptr[i]->notasFi;
		cout<<"La nota parcial de el alumno "<<i+1<<" : ";
		cin>>ptr[i]->notasPa;
		cout<<endl<<endl;
	}
	int sumaPa=0;
	double sumaF=0.0;
	int ma;
	for(int i=0;i<3;i++){
		sumaPa+=ptr[i]->notasPa;
	}
	cout<<"La suma de los examenes parciales es:"<<sumaPa<<endl;
	for(int i=0;i<3;i++){
		ma=ptr[0]->notasPr;
		if(ma<=ptr[i]->notasPr){
			ma=ptr[i]->notasPr;
		}else{
			ma;
		}
	}
	cout<<"La nota mayor de practicas es:"<<ma<<endl;
	for(int i=0;i<3;i++){
		sumaF+=ptr[i]->notasFi;
	}
	cout<<"El promedio de notas finales es:"<<sumaF/3.0;
}
