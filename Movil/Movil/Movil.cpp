// Calcular la distancia que recorre un móvil a un velocidad dada y en un intervalo de tiempo cualquiera.
//

#include <iostream>

using namespace std;

int main()
{
    double d, v, t;

    cout << "DIGITE LA VELOCIDAD DEL MOVIL; ";
    cin >> v;
    cout << "\n";
    cout << "DIGITE EL TIEMPO RECORRIDO DEL MOVIL; ";
    cin >> t;
    cout << "\n";
    d =  v*t;
    cout << "EL MOVIL RECORRIO UNA DISTANCIA DE: " << d << endl;

    system("pause");
    return 0;

}