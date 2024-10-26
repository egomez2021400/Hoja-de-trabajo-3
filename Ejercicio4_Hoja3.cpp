#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    string profesion;
};

int main() {
    Persona personas[5];
    string nombreBusqueda;
    bool encontrado = false;
    
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        cin >> personas[i].nombre;
        cout << "Ingrese la edad: ";
        cin >> personas[i].edad;
        cout << "Ingrese la profesion y/o oficio: ";
        cin >> personas[i].profesion;
    }
    
    cout << "Ingrese el nombre de la persona que quiere buscar: ";
    cin >> nombreBusqueda;
    
    for (int i = 0; i < 5; i++) {
        if (personas[i].nombre == nombreBusqueda) {
            cout << "Nombre: " << personas[i].nombre << ", Edad: " << personas[i].edad << ", Profesion: " << personas[i].profesion << endl;
            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "Persona no encontrada.\n";
    }
    
    return 0;
}

