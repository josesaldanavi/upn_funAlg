#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char *argv[]) {
	srand(time(0));
	int a[2][3];
	int suma=0;
	for (int i=0; i<2; i++){
		suma=0;
		for(int j=0; j<3; j++){
			a[i][j]=rand()%(999-100+1)+100;
			cout<<a[i][j]<<"\t";
			suma+=a[i][j];
		}
		cout<<suma<<"\n";
	}
	return 0;
}

