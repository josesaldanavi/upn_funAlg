#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	double  i=0.0,n,suma=0.0;
	cout<<"ingrese la cantidad de terminos de la serie:";
	cin>>n;
	while(i<n){
		cout<<4*i+3<<"/"<<3*i+2<<"\n";
		suma +=(4*i+3)/(3*i+2);
		i++;
	}
	cout<<"la suma de la terminos de la serie es:"<<suma;
	return 0;
}
/*Dise�e un programa que imprima y sume n t�rminos de la siguiente serie. Los t�rminos ser�n mostrados en una columna a raz�n de un t�rmino por fila. 	
3/2, 7/5, 11/8, 15/11, ...
*/
