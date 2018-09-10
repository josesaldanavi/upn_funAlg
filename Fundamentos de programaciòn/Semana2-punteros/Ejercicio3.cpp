#include <iostream>
#include <conio.h>

/*EL PUNTERO TIPO VOID PUEDE DIRECCIONAR A CUALQUIER DIRECCION
EN MEMORIA, ES DECIR, PUEDE EN CUALQUIER PARTE DEL PROGRAMA, DIRECCIONAR UN 
TIPO DE DATO FLOAT,CHAR INT..*/

using namespace std;

int main(){
	//declaramos una variable puntero ptr_01 de tipo void 
	void *ptr_01;
	//declaramos una variable puntero ptr_02 de tipo void;
	void *ptr_02;
	//declaramos una variable num_01 de tipo entero
	int num_01=10;
	//declaramos una variable num_02 de tipo float
	float num_02=23.45;
	
	ptr_01=&num_01;
	ptr_02=&num_02;
	
	//Convertir ptr_01 de tipo void a enter
	cout<<"Puntero ptr_01 apunta a:"<<*((int*)ptr_01)<<endl;
	//convertimos ptr_02 de tipo void a float
	cout<<"Puntero ptr_02 apunta a:"<<*((float*)ptr_02)<<endl;
}
