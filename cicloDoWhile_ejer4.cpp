#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int numeros,sum=0.0,q1=0,q3=0,q6=0,qT=0;
	do{
			numeros=rand()%(999-100+1)+100;
			cout<<numeros<<"\n";
			sum += numeros;
			if(numeros>=100 && numeros<=300)q1++;
			if(numeros>=301 && numeros<=798)q3++;
			if(numeros>=799 && numeros<=999)q6++;
			qT++;	
	}while(!(qT>=30));
	cout<<"La cantidad de terminos es:"<<qT;
	cout<<"\nLa suma de todos los números generados es:"<<sum;
	cout<<"\nLa cantidad de numeros generados del intervalo 100 a 300 es:"<<q1;
	cout<<"\nLa cantidad de numeros generados del intervalo 301 a 798 es:"<<q3;
	cout<<"\nLa cantidad de numeros generados del intervalo 799 a 999 es:"<<q6;
	return 0;
}
/*Diseñe un programa que genere 30 números aleatorios de tres cifras. El programa mostrará:
"	Los números generados.
"	La suma de todos los números generados.
"	La cantidad de números generados del intervalo 100 a 300
"	La cantidad de números generados del intervalo 301 a 798
"	La cantidad de números generados del intervalo 799 a 999
*/
