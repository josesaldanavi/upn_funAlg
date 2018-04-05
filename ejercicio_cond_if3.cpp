#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cod,qP;
	double iC,iD,iP,n;
	cout<<"Ingrese el codigo para aquirir el producto:";
	cin>>cod;
	if(cod==101){
		cout<<"El precio de este producto es: s/19.0";
		n=19.0;
		cout<<"\nIngrese la cantidad de productos:";
		cin>>qP;
		iC=n*qP;
		
		if(qP<11){
			iD=iC*0.05;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=11 && qP<21){
			iD=iC*0.075;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=21 && qP<31){
			iD=iC*0.10;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=31){
			iD=iC*0.125;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		
	}
	if(cod==102){
		cout<<"El precio de este producto es: s/21.0";
		n=21.0;
		cout<<"\nIngrese la cantidad de productos:";
		cin>>qP;
		iC=n*qP;
		if(qP<11){
			iD=iC*0.05;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=11 && qP<21){
			iD=iC*0.075;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=21 && qP<31){
			iD=iC*0.10;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=31){
			iD=iC*0.125;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		
	}
	if(cod==103){
		cout<<"El precio de este prodcuto es: s/23.0";
		n=23.0;
		cout<<"\nIngrese la cantidad de productos:";
		cin>>qP;
		iC=n*qP;
		
		if(qP<11){
			iD=iC*0.05;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=11 && qP<21){
			iD=iC*0.075;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=21 && qP<31){
			iD=iC*0.10;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=31){
			iD=iC*0.125;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
	}
	if(cod==104){
		cout<<"El precio de este producto es: s/25.0";
		n=25.0;
		cout<<"\nIngrese la cantidad de productos:";
		cin>>qP;
		iC=n*qP;
		
		if(qP<11){
			iD=iC*0.05;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=11 && qP<21){
			iD=iC*0.075;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=21 && qP<31){
			iD=iC*0.10;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
		if(qP>=31){
			iD=iC*0.125;
			iP=iC-iD;
			cout<<"\ncompra:"<<iC;
			cout<<"\nDescuento:"<<iD;
			cout<<"\nPagar:"<<iP;
		}
	}
	if(iC>250){
		cout<<"\nSe le obsequia una agenda UPN2018";
	}
	if(iC<250){
		cout<<"\nSe le obsequita un lapicero";
	}



	return 0;
}

