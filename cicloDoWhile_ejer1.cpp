#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int numeros,suma=0.0,q20=0,q51=0,q71=0;
	do{
		numeros=rand()%(99-20+1)+20;
		cout<<numeros<<"\n";
		suma += numeros;
		if(numeros>=20 && numeros<=50)q20++;
		if(numeros>=51 && numeros<=70)q51++;
		if(numeros>=71 && numeros<=99)q71++; 
	}while(!(numeros%2==0 && numeros>45 && numeros<65));
	cout<<"\nLa suma de todos los números generados es:"<<suma;
	cout<<"\nLa cantidad de numeros generados del intervalo 20 a 50 es:"<<q20;
	cout<<"\nLa cantidad de numeros generados del intervalo 51 a 70 es:"<<q51;
	cout<<"\nLa cantidad de numeros generados del intervalo 71 a 99 es:"<<q71;
	return 0;
}
/*Diseñe un programa que genere números aleatorios enteros del intervalo 20 a 99 hasta obtener un número par mayor que 45 pero menor que 65. El programa mostrará.
"	Los números generados.
"	La suma de todos los números generados.
"	La cantidad de números generados del intervalo 20 a 50
"	La cantidad de números generados del intervalo 51 a 70
"	La cantidad de números generados del intervalo 71 a 99
*/
