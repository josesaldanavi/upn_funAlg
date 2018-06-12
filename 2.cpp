#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int autos[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
	for (int i=0; i<=1; i++){
		for(int j=0; j<=2; j++){
			for(int k=0; k<=1; k++){
			cout<<"\t"<<autos[i][j][k]<<" ";}	
		}
	}
	cout<<endl;
	cout<<" "<<autos[0][0][0];cout<<endl;
	cout<<" "<<autos[0][0][1];cout<<endl;
	cout<<" "<<autos[0][1][0];cout<<endl;
	cout<<" "<<autos[0][1][1];cout<<endl;
	cout<<" "<<autos[0][2][0];cout<<endl;
	cout<<" "<<autos[0][2][1];cout<<endl;
	cout<<endl;
	cout<<" "<<autos[1][0][0];cout<<endl;
	cout<<" "<<autos[1][0][1];cout<<endl;
	cout<<" "<<autos[1][1][0];cout<<endl;
	cout<<" "<<autos[1][1][1];cout<<endl;
	cout<<" "<<autos[1][2][0];cout<<endl;
	cout<<" "<<autos[1][2][1];cout<<endl;
	return 0;
}

