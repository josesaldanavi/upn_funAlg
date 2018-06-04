#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a[5];
	int b[5];
	int c[5];
	int d[5],suma=0;
	for(int i=0;i<5;i++){
		cout<<"ingrese numeros A"<<i+1<<" :";cin>>a[i];
		cout<<"ingrese numeros B"<<i+1<<" :";cin>>b[i];
		cout<<"ingrese numeros C"<<i+1<<" :";cin>>c[i];
		d[i]=a[i]+b[i]+c[i];
		suma += d[i];
	}
	cout<<"suma:"<<suma;
	return 0;
}

/*4.Diseñar un programa que permita sumar 3 arreglos a, b y c de 5 elementos cada uno. 
EL resultado se debe almacenar en un cuarto arreglo d. 
La suma se puede definir como: 
d[k]=a[k]+b[k]+c[k] */
