#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int i=0,n;
	cout<<"Ingrese la cantidad de numeros que desea:";
	cin>>n;
	while(i<n){
		int numeros=rand()%(999-100+1)+100;
		if(numeros%2==0){
			cout<<numeros<<" par "<<"\n";
		}else{
			cout<<numeros<<" impar "<<"\n";
		}
		i++;
	}
	return 0;
}
/*Diseñe un programa que genere n números aleatorios de tres cifras e imprima cada número calificándolo de par o impar.
120 par
251 impar
457 impar
364 par
202 par
-----
-----
*/
