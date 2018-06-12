#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int n1, n2, resto;
	cout<<"Ingrese el numero 1: ";cin>>n1;
	cout<<"Ingrese el numero 2: ";cin>>n2;
	while (n2>0){
		resto=n1%n2;
		n1=n2;
		n2=resto;
	}
	cout<<"El mod es: "<<n1;
	return 0;
}
