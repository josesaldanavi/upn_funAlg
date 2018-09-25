#include <iostream>
#include <cstdlib>

using namespace std;

//funcion
void invertir(int nro);

int main()
{
	system("color 0a");
	int nro;
	cout<<"\n\t\t[       RECURSIVIDAD        ]\n";
	cout<<"\t\t------------------\n\n";
	cout<<"EJERCICIO 4: invertir un numero "<<endl<<endl;
	do{
		cout<<"ingrese numero:";
		cin>>nro;
		if(nro<0)cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO.......\n";
	}while(nro<0);
	cout<<"\n NUMERO: "<<nro;
	cout<<"\nINVERTIDO:";
	invertir(nro);
	cout<<endl<<endl;
	return 0;
}
void invertir(int nro)
{
 cout<<nro%10;
 if(nro>10)invertir(nro/10);
}

