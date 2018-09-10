#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//Declaramos y asignamos a n el valor de 100
	int n=100;
	//Declaramos dos variables de tipo puntero
	int *ptr1,*ptr2;
	//A ptr1 le asignamos la posicion de memoria de n
	ptr1=&n;
	//A ptr2 le asignamos la posicion de memoria ptr1
	ptr2=ptr1;
	//imprimiendo la posicion de memoria contenida en ptr1
	cout<<"Direccion de n asignada a ptr1:"<<ptr1<<endl;
	//imprimimos la posicion de memoria asignada ptr2 de ptr1
	cout<<"DIreccion asignada de ptr1 asignada a ptr2:"<<ptr2<<endl;
	
}
