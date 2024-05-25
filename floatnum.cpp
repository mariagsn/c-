#include <iostream>

using namespace std;

int main() {
    float uni, pre, subtt, desc = 0, iva, Total;
    cout << "Cantidad de unidades: ";
    cin >> uni;
    cout << "Precio: ";
    cin >> pre;
    subtt = uni * pre;
    if (subtt > 3000) {
        desc = subtt * 0.3;
    } else if (subtt > 2000) {
        desc = subtt * 0.2;
    } else if (subtt > 1000) {
        desc = subtt * 0.1;
    }
    iva = subtt * 0.16;
    Total = subtt - desc + iva;
    cout << "El descuento es de: " << desc << endl;
    cout << "El total es: " << Total << endl;

    return 0;
}