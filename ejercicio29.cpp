#include <iostream>
using namespace std;

int main() 
{
    int ar, bs, l, al, bsm, k;
    cout << "De qué figura quiere sacar el área:\n";
    cout << "1.-Triángulo 2.-Trapecio 3.-Rectángulo\n";
    cin >> k;
    
    if (k == 1) {
        cout << "Ingresa la base de tu triángulo: ";
        cin >> bs;
        cout << "Ingresa la altura del triángulo: ";
        cin >> al;
        ar = (bs * al) / 2;
        cout << "El área de tu triángulo es: " << ar << endl;
    }
    else if (k == 2) {
        cout << "Ingresa la base mayor de tu trapecio: ";
        cin >> bsm;
        cout << "Ingresa la base menor del trapecio: ";
        cin >> bs;
        cout << "Ingresa la altura del trapecio: ";
        cin >> al;
        ar = ((bsm + bs) * al) / 2;  // Se cambió la fórmula para calcular correctamente el área del trapecio.
        cout << "El área de tu trapecio es: " << ar << endl;
    }
    else if (k == 3) {
        cout << "Ingresa la base de tu rectángulo: ";
        cin >> bs;
        cout << "Ingresa la altura del rectángulo: ";
        cin >> al;
        ar = bs * al;
        cout << "El área de tu rectángulo es: " << ar << endl;
    }

    return 0;
}
