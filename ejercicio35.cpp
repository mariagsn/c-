#include <iostream>

int main() {
    int nm;
    std::cout << "¿Cuántos términos quieres que se muestren? ";
    std::cin >> nm;

    for (int i = 1; i <= nm; i++) {
        std::cout << " " << i * 5;
    }

    return 0;
}
