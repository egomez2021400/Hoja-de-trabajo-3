#include <iostream>
using namespace std;

bool validarContrasena(string contrasena) {
    if (contrasena.length() < 8) {
        return false;
    }

    bool tieneLetra = false;
    bool tieneNumero = false;

    for (size_t i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if (isalpha(c)) {
            tieneLetra = true;
        }
        if (isdigit(c)) {
            tieneNumero = true;
        }
    }

    return tieneLetra && tieneNumero;
}

int main() {
    string contrasena;

    cout << "=== Verificación de Contrasena ===\n";
    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (validarContrasena(contrasena)) {
        cout << "\nContrasena valida.\n";
    } else {
        cout << "\nContrasena invalida. Ingrese una contrasena de al menos 8 caracteres con letras y numeros.\n";
    }

    cout << "\n=== Fin del Programa ===\n";
    return 0;
}

