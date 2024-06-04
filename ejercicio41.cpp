#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int num;
    int suma = 0;
    int menor, mayor;

    // Pedir 10 números
    while (i < 10) {
        cout << "Introduce el número " << i + 1 << ": ";
        cin >> num;

        suma += num;

        if (i == 0) {
            mayor = menor = num;
        } else {
            if (num > mayor) {
                mayor = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
        
        i++;
    }

    cout << "La suma de los números es: " << suma << endl;
    cout << "El mayor número es: " << mayor << endl;
    cout << "El menor número es: " << menor << endl;

    return 0;
}
