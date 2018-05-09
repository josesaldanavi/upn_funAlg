#include <iostream>
using namespace std;
void declarar();
void resultado(int cod , int q);
void mostrar(double iC,double iD,double iP);
int cod,q;
double iC,iD,iP;
int main(int argc, char *argv[]) {
	declarar();
	resultado(cod,q);
	mostrar(iC,iD,iP);
	return 0;
}
void declarar(){
	 cout<<"Ingrese el codigo:";cin>>cod;
	 cout<<"Ingrese la cantidad:";cin>>q;
}
void resultado(int cod,int q){
	switch(cod){
	case 1:iC=q*4.70;break;
	case 2:iC=q*5.50;break;
	case 3:iC=q*4.50;break;
	default:iC=q*6.50;break;
	}
	if(q<7){
		iD=iC*0.115;
	}else{
		iD=iC*0.155;
	}
	iP=iC-iD;
}
void mostrar(double iC,double iD,double iP){
	cout<<"El importe de compra es:"<<iC;
	cout<<"\nEL importe de descuento es:"<<iD;
	cout<<"\nEL importe a pagar es:"<<iP;
}
