#include <iostream>

int main() {
    int i = 0;
    int num;
    int suma = 0;
    int menor, mayor;

    // Escribe 10 números
    while (i < 10) {
        std::cout << "Introduce el número " << i + 1 << ": ";
        std::cin >> num;

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

    std::cout << "La suma de los números es: " << suma << std::endl;
    std::cout << "El mayor número es: " << mayor << std::endl;
    std::cout << "El menor número es: " << menor << std::endl;

    return 0;
}
