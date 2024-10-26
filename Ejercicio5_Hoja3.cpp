#include <iostream>
using namespace std;

struct Producto {
    int id;
    string nombre;
    int cantidad;
};

int main() {
    Producto productos[10];
    string nombreBusqueda;
    int numProductos = 0;
    int idBusqueda;

    cout << "=== Registro de Productos ===\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nProducto " << i + 1 << ":\n";
        cout << "Ingrese el identificador del producto: ";
        cin >> productos[i].id;
        cout << "Ingrese el nombre del producto: ";
        cin >> productos[i].nombre;
        cout << "Ingrese la cantidad: ";
        cin >> productos[i].cantidad;
        numProductos++;

        cout << "Desea agregar mas productos? (s/n): ";
        char continuar;
        cin >> continuar;
        if (continuar == 'n') {
            break;
        }
    }

    cout << "\n=== Busqueda de Producto ===\n";
    cout << "Ingrese el identificador del producto que quiere buscar: ";
    cin >> idBusqueda;

    bool encontrado = false;
    for (int i = 0; i < numProductos; i++) {
        if (productos[i].id == idBusqueda) {
            cout << "\n*** Producto Encontrado ***\n";
            cout << "ID: " << productos[i].id << "\n";
            cout << "Nombre: " << productos[i].nombre << "\n";
            cout << "Cantidad: " << productos[i].cantidad << "\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nProducto no encontrado.\n";
    }

    cout << "\n=== Fin del Programa ===\n";
    return 0;
}

