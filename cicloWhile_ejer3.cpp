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
/*Diseñe un programa que imprima y sume n términos de la siguiente serie. 
5/2, 9/5, 13/8, 17/11, ...
Los términos serán mostrados en una columna a razón de un término por fila.
*/
