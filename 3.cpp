#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, n2, mcd;
	cout<<"Ingrese el primer numero: ";cin>>n1;
	cout<<"Ingrese el segundo numero: ";cin>>n2;
	int mayor=max(n1,n2);
	int menor=min(n1,n2);
	if (menor!=0){mcd=mayor%menor;
	cout<<"\nEl maximo como un divisor entre "<<n1<<" y "<<n2<<" es "<<mcd;}
	else cout<<"Un numero no puede ser 0";
	return 0;
}

