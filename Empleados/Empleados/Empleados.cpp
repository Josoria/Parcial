// Hacer un programa para calcular el promedio de los sueldos de 50 empleados de una compañía.
//
#include <iostream>

using namespace std;
int main()
{
	int empl;
	double suma, sueldo, prom;
	suma = 0; sueldo = 0; prom = 0; 
	for (empl = 0; empl <= 50; empl++) {

		cout << "DIGITE EL SUELDO: ";
		cin >> sueldo;
		cout << "\n";
		suma = suma + sueldo;
	}
	cout << "SUELDO GENERAL: " << suma << endl;
	prom = suma/empl;
	cout << "EL PROMEDIO DEL SUELDO GENERAL  DE LOS 50 ES: " << prom << endl;
	cout << "\n";

	system("pause");

	return 0;
}