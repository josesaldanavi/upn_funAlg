#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	//
	srand(time(0));
	int i,n,notas,qAp=0,qMn=0,qDs=0,suma=0.0;
	cout<<"ingrese la cantidad de estudiante:";
	cin>>n;
	for(i=1;i<=n;i++){
		notas=rand()%(20-1+1)+1;
		if(notas>11){
			qAp++;
		}
		if(notas<12){
			qDs++;
		}
		if(notas>16){
			qMn++;
		}
		suma += notas;
		cout<<"\n"<<notas;
	}
	cout<<"\nNota Promedio:"<<suma/n;
	cout<<"\nnotas maxima:"<<qMn;
	cout<<"\nDesaprobados:"<<qDs;
	cout<<"\nAprobados:"<<qAp;
	return 0;
}
/*Diseñe un programa que genere aleatoriamente las notas de una evaluación para n estudiantes de la carrera de Ingeniería de Sistemas Computacionales y muestre lo siguiente:
"	Las notas generadas
"	La nota promedio
"	La cantidad de estudiantes aprobados
"	La cantidad de estudiantes con la máxima nota
"	La cantidad de estudiantes desaprobados
*/
