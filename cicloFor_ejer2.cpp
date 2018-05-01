#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int n,sueldos,suma=0.0,sumaGmn=0.0,sumaGigual=0.0,sumaMas=0.0;
	cout<<"Ingrese la cantidad de empleados:";
	cin>>n;
	for(int i=0;i<n;i++){
		sueldos=rand()%(2690-930+1)+930;
		suma +=sueldos;
		if(sueldos<1500){
			sumaGmn +=sueldos;
		}
		if(sueldos==1500){
			sumaGigual +=sueldos;
		}
		if(sueldos>1500){
			sumaMas +=sueldos;
		}
		cout<<"\n"<<sueldos;
	}
	cout<<"\nSueldo Promedio:"<<suma/n;
	cout<<"\nSuma de sueldos menores de 1500:"<<sumaGmn;
	cout<<"\nSuma de sueldos igual a 1500:"<<sumaGigual;
	cout<<"\nSuma de sueldos mayores a 1500:"<<sumaMas;
	return 0;
}
/*Diseñe un programa que genere aleatoriamente los sueldos enteros de n empleados de una empresa con valores del intervalo 930 a 2690 y muestre lo siguiente:
"	Los sueldos generados
"	El sueldo promedio
"	La suma de sueldos de los empleados que ganan menos de S/. 1500
"	La suma de sueldos de los empleados que ganan S/. 1500
"	La suma de sueldos de los empleados que ganan más de S/. 1500
*/
