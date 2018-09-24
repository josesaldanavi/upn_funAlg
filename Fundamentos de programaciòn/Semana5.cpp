#include <iostream>

using namespace std;

int main()
{
	int n1,n2,opc;
	int op=1;
	char opc1;
	while(op>0)
	{
		cout<<"Ingrese el primer número : ";
		cin>>n1;
		cout<<"Ingrese el número de desplazamiento: ";
		cin>>n2;
		cout<<"Ingrese que tipo de desplazamiento desea en numeros indicados:"<<endl;
		cout<<"1)<<(izquierda)"<<"2)>>(derecha)"<<endl;
		cin>>opc;
		switch(opc)
		{
			case 1:cout<<"Resultado es:"<<(n1<<n2);break;
			case 2:cout<<"Resultado es:"<<(n1>>n2);break;
		}
		cout<<endl<<endl;
		cout<<"quiere ingresar de nuevo?"<<"s/n :"<<endl;
		cin>>opc1;
		if(opc1=='s')
		{
			op++;
			system("cls");
		}
		if(opc1=='n')
		{
			cout<<"adios";	
		}
	}
}
