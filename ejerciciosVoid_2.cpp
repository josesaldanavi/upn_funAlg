#include <iostream>
using namespace std;
void declarar();
void resultado(int cod , int q);
void mostrar();
int cod,q;
double iC,iD,iP;
int main(int argc, char *argv[]) {
	declarar();
	return 0;
}
void declarar(){
	 cout<<"Ingrese el codigo:";cin>>cod;
	 if(cod>1 && cod<5){
		 cout<<"Ingrese la cantidad:";cin>>q;
		 resultado(cod,q);
		 mostrar();
	 }else{
		 cout<<"Numero invalido.";
	 }
	 
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
void mostrar(){
	cout<<"El importe de compra es:"<<iC;
	cout<<"\nEL importe de descuento es:"<<iD;
	cout<<"\nEL importe a pagar es:"<<iP;
}
