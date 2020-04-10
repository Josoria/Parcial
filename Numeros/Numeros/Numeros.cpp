// Numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Hacer un programa en C++ para leer 10 números y obtener su cubo y su cuarta.

#include <iostream>
using namespace std;

int main()
{
	int n, cubo, cuarta, i;

	for (i = 1; i <= 10; i++)
	{
		cout << "DIGITE EL NUMERO : " << endl;
		cin >> n;
		cubo = n * n * n;
		cuarta = cubo * n;
		cout << "EL CUBO DEL NUMERO ES : " << cubo << endl;
		cout << "LA CUARTA DEL NUMERO ES : " << cuarta << endl;
	}
	system("pause");
	return 0;
}


