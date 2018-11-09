#include<iostream>
#include<cstdlib>
using namespace std;
int progresion(int nro){
	if(nro==0)return 0;
	if(nro==1)return 1;
	else return (3*nro)-2;
}

int main(void){
	system("color 0a");
	int nro;
	cout<<"\n\t\t[       RECURSIVIDAD            ]\n";
	cout<<"Ingrese cantidad de terminos :: ";
	cin>>nro;
	cout<<endl<<endl;
	for(int i=1;i<nro+1;i++){
		cout<<progresion(i);
		if(i<nro)cout<<" , ";
	}
}


