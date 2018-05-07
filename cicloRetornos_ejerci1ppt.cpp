#include <iostream>
using namespace std;
void Helados(int cP,int qT);
int main(int argc, char *argv[]) {
	int cP,qT;
	cout<<"Ingrese el codigo de producto del 1-4:";cin>>cP;
	if(cP<5){
		cout<<"Ingrese la cantidad de prodcuto:";cin>>qT;
		Helados( cP, qT);
		return 0;
	}
}
void Helados(int cP,int qT){
	double iC,iP,iD;
	switch(cP){
	case 1:iC=qT*1.5;break;
	case 2:iC=qT*2.0;break;
	case 3:iC=qT*1.7;break;
	default:iC=qT*2.5;
	}
	if(qT<24){
		iD=iC*0.035;
	}else{
		iD=iC*0.055;
	}
	iP=iC-iD;
	cout<<"El importe de compra es:"<<iC;
	cout<<"\nEl importe de descuento es:"<<iD;
	cout<<"\nEl importe a pagar es :"<<iP;
}
