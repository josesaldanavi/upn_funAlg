#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int numeros,sum=0.0,q1=0,q3=0,q6=0;
	do{
		numeros=rand()%(999-111+1)+111;
		cout<<numeros<<"\n";
		sum += numeros;
		if(numeros>=111 && numeros<=300)q1++;
		if(numeros>=301 && numeros<=600)q3++;
		if(numeros>=601 && numeros<=999)q6++;
	}while(!(numeros%2==1 && numeros<700 && numeros>500));
	cout<<"La suma de todos los números generados es:"<<sum;
	cout<<"\nLa cantidad de numeros generados del intervalo 111 a 300 es:"<<q1;
	cout<<"\nLa cantidad de numeros generados del intervalo 301 a 600 es:"<<q3;
	cout<<"\nLa cantidad de numeros generados del intervalo 601 a 999 es:"<<q6;
	return 0;
}
/*Diseñe un programa que genere números aleatorios enteros del intervalo 111 a 999 hasta obtener un número impar menor que 700 pero mayor que 500. El programa mostrará:
"	Los números generados
"	La suma de todos los números generados.
"	La cantidad de números generados del intervalo 111 a 300.
"	La cantidad de números generados del intervalo 301 a 600.
"	La cantidad de números generados del intervalo 601 a 999.
*/
