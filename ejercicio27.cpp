#include <iostream>

int main() {
    char car;

    std::cout << "Ingrese un caracter: ";
    std::cin >> car;

    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u' ||
        car == 'A' || car == 'E' || car == 'I' || car == 'O' || car == 'U') {
        std::cout << "El caracter ingresado es una vocal." << std::endl;
    } else {
        std::cout << "El caracter ingresado no es una vocal." << std::endl;
    }

    return 0;
}
