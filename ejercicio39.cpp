#include <iostream>
#include <cmath>

double potencia(double bs, double ex) {
    return std::pow(bs, ex);
}

int main() {
    double bs, ex, resul;
    std::cout << "Ingresa un numero: ";
    std::cin >> bs;
    std::cout << "Ingresa a la potencia: ";
    std::cin >> ex;
    resul = potencia(bs, ex);
    std::cout << bs << " elevado por " << ex << " es de " << resul << std::endl;
    return 0;
}
