#include <iostream>
using namespace std;

int main() {
	float precio, total, descuento = 0;
	char continuar;
	
	do{
		cout << "Ingrese el precio del articulo: ";
		cin >> precio;
		total += precio;
		
		cout << "Desea ingresar otro articulo (s/n) ";
		cin >> continuar;
		
	} while (continuar == 's' || continuar == 'S');
	
	if(total > 100) {
		descuento = total * 0.10;
		total -= descuento;
	}
	
	cout << "El total a pagar es: " << total << endl;
	return 0;
}
