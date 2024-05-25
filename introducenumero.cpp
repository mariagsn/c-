#include <iostream>

int main() {
    int numero, suma = 0, cont = 0;

    do {
        std::cout << "Introduce un numero o un 0 para finalizar: ";
        std::cin >> numero;

        if (numero != 0) {
            std::cout << "Has introducido el numero: " << numero << std::endl;
            suma += numero;
            cont++;
        }
    } while (numero != 0);

    std::cout << "Se ha introducido el numero 0" << std::endl;
    std::cout << "La cantidad de numeros es: " << cont << std::endl;
    std::cout << "La suma de los numeros es: " << suma << std::endl;
    return 0;
}