#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	double i=0,n,qAp=0,qDes=0,qMx=0,prom=0.0;
	cout<<"Ingrese la cantidad de estudiantes:";
	cin>>n;
	while(i<n){
		int notas=rand()%(20-0+1)+0;
		cout<<notas<<"\n";
		prom +=notas/n;
		if(notas<12){
			qDes ++;
		}
		if(notas>16){
			qMx++;
		}
		if(notas>13){
			qAp++;
		}
		i++;
	}
	cout<<"\nLa nota promedio es:"<<prom;
	cout<<"\nLa cantidad de estudiantes aprobados son:"<<qAp;
	cout<<"\nLa cantidad de estudiantes desaprobados son:"<<qDes;
	cout<<"\nLa cantidad de estudiantes con la maxima nota son:"<<qMx;
	return 0;
}
/*Diseñe un programa que genere aleatoriamente las notas de una evaluación para n estudiantes de la carrera de Ingeniería de Sistemas Computacionales y muestre lo siguiente:
"	Las notas generadas
"	La nota promedio
"	La cantidad de estudiantes aprobados
"	La cantidad de estudiantes con la máxima nota
"	La cantidad de estudiantes desaprobados
*/
