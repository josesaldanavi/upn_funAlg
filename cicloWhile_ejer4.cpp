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
/*Dise�e un programa que imprima y sume n t�rminos de la siguiente serie. 
6/5, 9/11, 12/17, 15/23, ...

Los t�rminos ser�n mostrados en una columna a raz�n de un t�rmino por fila.
*/
