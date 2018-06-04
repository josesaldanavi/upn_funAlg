#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int ve[10],eMa=0,eMe=100,suma=0.0,qEP=0,qEI=0;
	for(int i=0;i<10;i++){
		ve[i]=rand()%(100-0+1)+0;
		cout<<""<<ve[i]<<"\n";
		suma +=ve[i];
		if(ve[i]<=eMe)eMe=ve[i];
		if(ve[i]>=eMa)eMa=ve[i];
		
		if(ve[i]%2==0){
			qEP ++;
		}else qEI ++;
	}
	cout<<"La edad mayor es:"<<eMa;
	cout<<"\nLa edad menor es:"<<eMe;
	cout<<"\nEl promedio de las edades es:"<<suma*1.0/10.0;
	cout<<"\nLa cantidad de edades pares es:"<<qEP;
	cout<<"\nLa cantidad de edades impares es:"<<qEI;
	return 0;
}
/*5.	Llene un vector de 10 elementos con las edades aleatorias de 2 dígitos de la personas, mostrar: 
"	La mayor Edad 
"	La menor Edad 
"	El promedio de Edades 
"	Cantidad de Edades pares 
"	Cantidad de Edades impares 
*/
