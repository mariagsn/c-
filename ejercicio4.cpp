#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string arreglo1[3];
    int arreglo2[3];

    arreglo1[0] = "Fernando";
    arreglo1[1] = "Oscar";

    arreglo2[0] = 74;
    arreglo2[1] = 56;
    arreglo2[2] = 10;

    std::cout << "Arreglo 1:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "El dato de la posicion " << i << " es: " << arreglo1[i] << std::endl;
    }

    std::cout << "Arreglo 2:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "El dato de la posicion " << i << " es: " << arreglo2[i] << std::endl;
    }

    return 0;
}