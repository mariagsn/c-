#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0, contador = 0;
    do {
        cout << "Introduce un numero (0 para finalizar): ";
        cin >> numero;
        if (numero != 0) {
            cout << "Se introducio el numero " << numero << endl;
            suma += numero;
            contador++;
        }
    } while (numero != 0);

    cout << "Se ha introducido el numero 0." << endl;
    cout << "Cantidad de numeros introducidos: " << contador << endl;
    cout << "Suma de los numeros introducidos: " << suma << endl;
    
    return 0;
}
