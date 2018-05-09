#include <iostream>
using namespace std;
void inicio();
void calcular(int cod,int q);
void mostrar(double iC,double iD,double iP);
int q,cod;
double iC,iD,iP;
int main(int argc, char *argv[]) {
	inicio();
	calcular(cod,q);
	mostrar(iC,iD,iP);
	return 0;
}
void inicio(){
	cout<<"Ingrese el codigo a optener:";cin>>cod;
	cout<<"Ingrese la cantidad de productos:";cin>>q;
}
void calcular(int cod,int q){
	switch(cod){
	case 1:iC=q*1.5;break;
	case 2:iC=q*2.0;break;
	case 3:iC=q*1.7;break;
	default:iC=q*2.5;
	}
	if(q<12){
		iD=iC*0.035;
	}else{
		iD=iC*0.055;
	}
	iP=iC-iD;
}
void mostrar(double iC,double iD,double iP){
	cout<<"El importe de compra es:"<<iC;
	cout<<"\nEl importe de descuento es:"<<iD;
	cout<<"\nEl importe a pagar es:"<<iP;
}

