#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int i=0,n,prom=0.0,qEgM=0.0,qEgI=0.0,qEgMa=0.0;
	cout<<"Ingresa la cantidad de empleados:";
	cin>>n;
	while(i<n){
		int sueldos=rand()%(3150-850+1)+850;
		prom=sueldos/n;
		if(sueldos<1750){
			qEgM ++;
		}
		if(sueldos==1750){
			qEgI ++;
		}
		if(sueldos>1750){
			qEgMa ++;
		}
		cout<<sueldos<<"\n";
		i++;
	}
	cout<<"\nel promedio de sueldo es:"<<prom;
	cout<<"\ncantidad de empleados que ganan menos de 1750:"<<qEgM;
	cout<<"\ncantidad de empleados que ganan igual de 1750:"<<qEgI;
	cout<<"\ncantidad de empleados que ganan más de 1750:"<<qEgMa;
	return 0;
}
/*Diseñe un programa que genere aleatoriamente los sueldos enteros de n empleados de una empresa con valores del intervalo 850 a 3150 y muestre lo siguiente: 
Los sueldos generados
El sueldo promedio
La cantidad de empleados que ganan menos de S/. 1750
La cantidad de empleados que ganan S/. 1750
La cantidad de empleados que ganan más de S/. 1750
*/
