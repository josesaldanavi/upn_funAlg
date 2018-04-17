#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int bolo;
	double dinero ;
	cout<<"Ingrese el importe que a pagado :";
	cin>>dinero;
	if(dinero>500){
		cout<<"Felicidades ingreso al concurso";
		cout<<"\nSaque un bolo de la urna:";
		cin>>bolo;
		bolo=bolo/10;
		switch(bolo){
		case 1: cout<<"gano una agenda";break;
		case 2: cout<<"gano un reloj";break;
		case 3: cout<<"gano una memoria usb";break;
		case 4: cout<<"gano un perfume";break;
		case 5: cout<<"gano una radio";break;
		default:cout<<"Gano una pelota";break;
		}
	}else{
		cout<<"No entra al sorteo";
	}
	return 0;
}

