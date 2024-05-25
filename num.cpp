#include <iostream>
using namespace std;
int main() {
    int un, pre, subt;

    cout << "Ingrese la cantidad de unidades: ";
    cin >> un;
    cout << "Cantidad de unidades: " << un << std::endl;

    cout << "Ingrese el precio: ";
    cin >> pre;
    cout << "Precio: " << pre << std::endl;

    subt = un * pre;
    cout << "Subtotal: " << subt << std::endl;

    return 0;
}