#include <iostream>

using namespace std;
int main(){
	int valores[5];
	int *p;
	p=valores;
	for(int i=0;i<5;i++){
		cout<<"Ingrese el valor:"<<i<<":";cin>>valores[i];
	}
	int prom=0;
	for(int i=0;i<5;i++){
		if(*p<12){
			prom++;
		}
		p++;
	}
	cout<<"Prom:"<<prom ;
}
