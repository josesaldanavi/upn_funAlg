#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int v[7];
	int suma=0.0,nMa=0;
	for(int i=0;i<7;i++){
		cout<<"Ingrese valores:";cin>>v[i];
		suma +=v[i];
			if(v[i]>nMa){
				nMa=v[i];
			}
	}
	cout<<"La mayor nota es:"<<nMa;
	cout<<"\nLa suma de tods las notas es:"<<suma/7;
	
	return 0;
}

