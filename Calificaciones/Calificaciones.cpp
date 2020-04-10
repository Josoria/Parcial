// Calificaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Programa para determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su promedio de 3 
//calificaciones es mayor o igual a 70; reprueba en caso contrario

#include <iostream>
using namespace std;

int main()
{
    double prom, calf1, calf2, calf3;
    cout << "DIGITE LA PRIMERA CALIFICACION: ";
    cin >> calf1;
    cout << "\n";
    cout << "DIGITE LA SEGUNDA CALIFICACION: ";
    cin >> calf2;
    cout << "\n";
    cout << "DIGITE LA TERCERA CALIFICACION: ";
    cin >> calf3;
    cout << "\n";
    prom = (calf1 + calf2 + calf3) / 3;

    cout << "EL PROMEDIO DE CALIFICACIONES ES: " << prom << endl;

    if (prom >= 70)  cout << "ALUMNO APROBADO" << endl;
    else if (prom < 70) cout << "ALUMNO REPROBADO" << endl;

    system("pause");
    return 0;

}