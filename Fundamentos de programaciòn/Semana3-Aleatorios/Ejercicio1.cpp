/* En C, para obtener números aleatorios, tenemos la función rand(). 
Esta función, cada vez que la llamamos, nos devuelve un número 
entero aleatorio entre 0 y el RAND_MAX (un número enorme, como 
de 2 mil millones). */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	/* Semilla de rand() es srand() y permite obtener diferentes 
	números aleatorios */
	
	srand(time(NULL));
	for(int i=0;i<10;i++){
		//numeros aleatorios entre 0 y 9;
		cout<<rand()%10<<endl;
	}
	
}
