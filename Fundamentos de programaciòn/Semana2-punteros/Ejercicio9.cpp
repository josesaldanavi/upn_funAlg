/*Ejemplo de funcion y puntero, que indique la longitud de una cadena*/
#include <iostream>
using namespace std;
//funcion
int longitud(char*);

int main(){
	char cadena[80];
	cout<<"Introduce cadena:";
	cin.getline(cadena,sizeof(cadena));
	cout<<"La longitud de la cadena es:"<<longitud(cadena)<<endl;
	system("pause");
}

int longitud(char *s){
	//Declaramos variable contador
	int cont=0;
	//Mientras *s no sea Null, continua la iteracion
	while(*s){
		s++;
		cont ++;
	}
	//retorna la cantidad de elementos de la cadena
	return cont;
}
