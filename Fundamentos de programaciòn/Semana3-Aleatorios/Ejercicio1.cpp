/* En C, para obtener n�meros aleatorios, tenemos la funci�n rand(). 
Esta funci�n, cada vez que la llamamos, nos devuelve un n�mero 
entero aleatorio entre 0 y el RAND_MAX (un n�mero enorme, como 
de 2 mil millones). */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	/* Semilla de rand() es srand() y permite obtener diferentes 
	n�meros aleatorios */
	
	srand(time(NULL));
	for(int i=0;i<10;i++){
		//numeros aleatorios entre 0 y 9;
		cout<<rand()%10<<endl;
	}
	
}
