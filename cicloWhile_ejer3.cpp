#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double i=0,n,suma=0.0;
	cout<<"Ingrese la cantidad de terminos de la serie:";
	cin>>n;
	while(i<n){
		cout<<4*i+5<<"/"<<3*i+2<<"\n";
		suma += (4*i+5/3*i+2);
		i++;
	}
	cout<<"La suma de los terminos de la serie es:"<<suma ;
	return 0;
}
/*Dise�e un programa que imprima y sume n t�rminos de la siguiente serie. 
5/2, 9/5, 13/8, 17/11, ...
Los t�rminos ser�n mostrados en una columna a raz�n de un t�rmino por fila.
*/
