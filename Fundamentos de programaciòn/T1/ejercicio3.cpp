#include <iostream>
#include <conio.h>

using namespace std;
double suma(double *a, double *b);
double resta(double *a, double *b);
double multi(double *a,double *b);
double div(double *a,double *b);

int cont=-1;

int main(){
	int opc;
	double a;
	double b;
	while(cont<0){
		cout<<endl<<"Ingrese el primer numero:";
		cin>>a;
		cout<<"Ingrese el segundo numero:";
		cin>>b;
		cout<<"Ingrese una opcion:"<<endl;
		cout<<"1.-Suma"<<endl<<"2.-Resta"<<endl<<"3.-Multiplicacion"<<endl<<"4.-Division"<<endl;
		cin>>opc;
		if(opc>4 || opc<1){
			cout<<"Ingrese una opcion del menu";
			cont--;
		}else{
			switch(opc){
				case 1:cout<<"Suma----:"<<suma(&a,&b);break;
				case 2:cout<<"Resta----:"<<resta(&a,&b);break;
				case 3:cout<<"Multiplicacion----:"<<multi(&a,&b);break;
				default:cout<<"Division----:"<<div(&a,&b);break;
			}
			cout<<endl<<"--------------------------------------------------"<<endl;
			cout<<"Desea de nuevo??"<<endl<<"1)si"<<"\t"<<"2)no"<<endl;
			cin>>opc;
			switch(opc){
				case 1:cont --;break;
				case 2: cont ++;
						if(cont<0){
							cont=0;
						}
						cout<<"Gracias!";break;
				default:cout<<"No hay opción";break;
			}
		}
	}
}


double suma(double *a, double *b){
	int suma;
	suma=*a + *b;
	return suma;
}

double resta(double *a, double *b){
	double resta;
	resta=*a - *b;
	return resta;
}

double multi(double *a, double *b){
	double multi;
	multi=(*a) *  (*b) * 1.0;
	return multi;
}

double div(double *a, double *b){
	double div;
	if(*b<=0){
		cout<<"No se puede dividir cualquier numero entre 0";
		cont --;
	}else{
		return div=*a / *b;
	}

}


