// Hacer un programa en C++ que reciba de entrada 10 ventas del mismo número de vendedores y que de como salida:
// -El promedio de las ventas
// -La cantidad de ventas mayores o iguales a 50,000.00.
// 

#include <iostream>
using namespace std;


int main()
{
    int i, cventa ;
    double suma, venta, prom;
    suma = 0;
    cventa = 0;
     
    for (i = 0; i <= 9; i++) 
        {
           cout << "DIGITE VENTAS DEL VENDEDOR: \n";
              cin >> venta;
           cout << "\n";
        
             if (venta >= 50000) 
              {
		       cventa = cventa + 1;
           }
              
           suma = suma + venta;
           prom = suma / 10;
	   
    }
            
    cout << "EL PROMEDIO DE VENTA ES: " << prom << endl;
    cout << "CANTIDAD VENDIDOS MAYOR O IGUAL A 50 MIL: " << cventa << endl;



      system("pause");
        return 0; 


}


