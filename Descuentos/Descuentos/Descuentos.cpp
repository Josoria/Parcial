// Calcular el total a pagar por un cliente al que se le realiza un descuento de un 50%, sobre el total de su compra.
//

#include <iostream>
using namespace std;

int main()
{
    double monto, neto ;
    

    cout << "DIGITE PRECIO DEL ARTICULO: " ;
    cin >> monto;
    cout << "\n";
    cout << "SE LE APLICARA UN DESCUESTO DEL 50%" "\n";
    
    cout << "\n";
    cout << "EL PRECIO DEL ARTICULO ES DE " << monto << " " << "MENOS" << " " << "50%" << "\n";
    cout << "\n";
    neto = monto - (monto * 0.5) ;
    cout << "\n";
    cout << "EL MONTO NETO A COBRAR ES: " << neto << endl;

    system("pause");
     return 0;

}
