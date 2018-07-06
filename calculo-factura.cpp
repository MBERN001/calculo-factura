#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char* argv[])
{
    if (argc < 2) {
        cout << "Ingrese el subtotal y el descuento";
        return 1;
    }	
    
    cout << "\n\n Calculo del total de una factura con descuento e impuesto :\n";
	cout << "-----------------------------------------------------------\n";
	
	float subtotal;
	int descuento;
	float impuesto;
	float calculoDescuento;
	float calculoImpuesto;
	float total;
	char* exento;
	
	subtotal=atoi(argv[1]);
	descuento=atoi(argv[2]);
	impuesto = 0.15;
	
		
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
    cout << "Ingrese el subtotal:";
	cin >> subtotal;
	cout << "Ingrese el descuento:";
	cin >> descuento;
	cout << "Esta exenta de impuesto?:";
	cin >> exento;
	{
	if (exento  == "si" )
	calculoImpuesto = 0;  
	}	
	
	cout << " El total a pagar es "<< total;
}

