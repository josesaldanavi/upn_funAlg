/*Realizar  un ejemplo de funciones y punteros, que me indique la cantidad
de vocales de una cadena*/
#include <iostream>
//cuenta las vocales de na cadena
using namespace std;

int cuenta_vocales(char*s);

int main(){
	char cadena[80];
	cout<<"Introduce cadena:";
	cin.getline(cadena,80,'\n');
	//en la llamada a la funcion se envia, el array de caracteres
	cout<<"Numero de vocales:"<<cuenta_vocales(cadena)<<endl;
	system("pause");
}

int cuenta_vocales(char *s)//s contiene la direccion de inicio del array de c
{
	int cont=0;
	while(*s)//mientras no sea null
	{
		switch(toupper(*s))//toupper pasa el caracterr a mayusculas para hacer check
		{
			case 'A':
			case 'E':	
			case 'I':
			case 'O':
			case 'U':cont++;	
		}
		s++;
	}	
	return cont;
}

