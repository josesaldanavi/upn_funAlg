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
/*Dise�e un programa que genere n�meros aleatorios de 2 d�gitos hasta obtener un n�mero impar mayor que 40 pero menor que 60. El programa mostrar�.
Los n�meros generados.
La suma de todos los n�meros generados.
La cantidad de n�meros generados del intervalo 10 a 40
La cantidad de n�meros generados del intervalo 41 a 70
La cantidad de n�meros generados del intervalo 71 a 99
*/
