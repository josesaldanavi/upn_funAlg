#include<iostream>
#include<conio.h>

using namespace std ;

int main(){
	//declarando variable n
	int n=100;
	// declaramos la variable ptr de tipo de puntero
	int *ptr;
	//asignamos la posicion de memoria de n a ptr
	ptr=&n;
	//asignamos el valor de n por referencia a ptr
	*ptr=n;
	//imprimimos el valor de la variable n
	cout<<"Valor de la variable n:"<<n<<endl;
	//imprimimos la direccion de la variable n
	cout<<"posicion de memoria de n:"<<ptr<<endl;
	//imprimimo el valor de n por referencia de memoria
	cout<<"Valor n, referencia por direccion: "<<*ptr<<endl;
	}
