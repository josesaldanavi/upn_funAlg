#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int n,i=0,prom=0.0,suMen=0.0,suIg=0.0,suMas=0.0;
	cout<<"Ingrese la cantidad de empleados:";
	cin>>n;
	while(i<n){
		int sueldo=rand()%(2690-930+1)+930;
		cout<<sueldo<<"\n";
		prom += sueldo/n;
		if(sueldo<1500){
			suMen +=sueldo;
		}
		if(sueldo==1500){
			suIg += sueldo;
		}
		if(sueldo>1500){
			suMas += sueldo;
		}
		i++;
	}
	cout<<"\nEl sueldo promedio es:"<<prom;
	cout<<"\nLa suma de los sueldos menores que 1500 es:"<<suMen;
	cout<<"\nLa suma de los sueldos iguales que 1500 es:"<<suIg;
	cout<<"\nLa suma de los sueldos mayores que 1500 es:"<<suMas;
	return 0;
}
/*Diseñe un programa que genere aleatoriamente los sueldos enteros de n empleados de una empresa con valores del intervalo 930 a 2690 y muestre lo siguiente:
"	Los sueldos generados
"	El sueldo promedio
"	La suma de sueldos de los empleados que ganan menos de S/. 1500
"	La suma de sueldos de los empleados que ganan S/. 1500
"	La suma de sueldos de los empleados que ganan más de S/. 1500
*/
