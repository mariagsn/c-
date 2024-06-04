#include <iostream>

int main() {
    int cart;
    std::cout << "Ingresa el número de tu carta: ";
    std::cin >> cart;

    if (cart == 1) {
        std::cout << "Tu carta es AS" << std::endl;
    } else if (cart == 10) {
        std::cout << "Tu carta es sota" << std::endl;
    } else if (cart == 11) {
        std::cout << "Tu carta es caballo" << std::endl;
    } else if (cart == 12) {
        std::cout << "Tu carta es rey" << std::endl;
    } else if (cart >= 2 && cart <= 9) {
        std::cout << "No es figura ni tampoco AS" << std::endl;
    } else {
        std::cout << "Este número no está en la baraja española" << std::endl;
    }

    return 0;
}
