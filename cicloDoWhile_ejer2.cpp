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
	cout<<"La suma de todos los n�meros generados es:"<<sum;
	cout<<"\nLa cantidad de numeros generados del intervalo 111 a 300 es:"<<q1;
	cout<<"\nLa cantidad de numeros generados del intervalo 301 a 600 es:"<<q3;
	cout<<"\nLa cantidad de numeros generados del intervalo 601 a 999 es:"<<q6;
	return 0;
}
/*Dise�e un programa que genere n�meros aleatorios enteros del intervalo 111 a 999 hasta obtener un n�mero impar menor que 700 pero mayor que 500. El programa mostrar�:
"	Los n�meros generados
"	La suma de todos los n�meros generados.
"	La cantidad de n�meros generados del intervalo 111 a 300.
"	La cantidad de n�meros generados del intervalo 301 a 600.
"	La cantidad de n�meros generados del intervalo 601 a 999.
*/
