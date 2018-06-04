#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nota[8];
	int suma = 0, apro = 0, desa = 0;
	double x = 0, y = 0;
	for (int i = 0; i < 8; i++) {
		cout << "Ingrese notas:"; cin >> nota[i];
		suma += nota[i];
		if (nota[i] < 12) {
			desa++;
		}
		else apro++;
	}
	x = (apro * 100) / 8;
	y = 100 - x;
	cout <<"El promedio es:"<<suma/(1.0*8);
	cout << "\nLa cantidad de desaprobados es:" << desa;
	cout << "\nLa cantidad de aprobados es:" << apro;
	cout << "\nEl porcentaje de aprobados es:" << x;
	cout << "\nEl porcentaje de desaprobados es:" << y;
	return 0;
}

