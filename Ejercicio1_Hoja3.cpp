#include <iostream>
using namespace std;

int main(){
	float temperatura, humedad;
	
	cout << "Ingrese la temperatura: ";
	cin >> temperatura;
	cout << "Ingrese la humedad: ";
	cin >> humedad;
	
	if (temperatura > 35 && humedad < 30) {
		cout << "La planta necesita de riego de manera urgente. \n";
	} else if (temperatura >= 15 && temperatura <= 35 && humedad >= 30 && humedad <= 70){
		cout << "La planta esta en buen estado. \n";
	} else if (temperatura < 15){
		cout << "La planta podria estar en peligro \n";
	} else {
		cout << "Intentelo de nuevo, ingreso un dato erroneo. \n";
	}

	return 0;
}
