#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double n, i=0.0,suma=0.0;
	cout<<"Ingrese la cantidad de terminos de la serie:";
	cin>>n;
	while(i<n){
		cout<<3.0*i+6.0<<"/"<<6.0*i+5.0<<"\n";
		suma += (3.0*i+6.0)/(6.0*i+5.0);
		i++;
	}
	cout<<"La suma de los terminos de la serie son:"<<suma;
	return 0;
}
/*Diseñe un programa que imprima y sume n términos de la siguiente serie. 
6/5, 9/11, 12/17, 15/23, ...

Los términos serán mostrados en una columna a razón de un término por fila.
*/
