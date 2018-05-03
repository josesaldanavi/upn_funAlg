#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int numeros,suma=0.0,qD=0.0,qC=0.0,qS=0.0;
	do{
		numeros=rand()%(99-10+1)+10;
		suma += numeros;
		if(numeros>=10 && numeros<=40){
			qD++;
		}
		if(numeros>=41 && numeros<=70){
			qC++;
		}
		if(numeros>=71 && numeros<=99){
			qS++;
		}
		cout<<numeros<<"\n";
	}while(!(numeros%2==1 && numeros>40 && numeros<60));
	cout<<"\nsuma:"<<suma;
	cout<<"\nLa cantidad de numeros generados del intervalo 10 a 40 es:"<<qD;
	cout<<"\nLa cantidad de numeros generados del intervalo 41 a 70 es:"<<qC;
	cout<<"\nLa cantidad de numeros generados del intervalo 71 a 99 es:"<<qS;
	return 0;
}
/*Diseñe un programa que genere números aleatorios de 2 dígitos hasta obtener un número impar mayor que 40 pero menor que 60. El programa mostrará.
Los números generados.
La suma de todos los números generados.
La cantidad de números generados del intervalo 10 a 40
La cantidad de números generados del intervalo 41 a 70
La cantidad de números generados del intervalo 71 a 99
*/
