#include <iostream>

int main() {
    int nm, i = 0, acum = 0;
    int vector[20];

    for (i = 0; i < 20; ++i) {
        std::cout << "Ingrese el numero entero " << i + 1 << ": ";
        std::cin >> nm;
        vector[i] = nm;
        acum += nm;
        if (nm == 0) {
            break;
        }
    }

    std::cout << "La suma de sus numeros es de: " << acum << std::endl;

    std::cout << "Los numeros ingresados en orden inverso son: " << std::endl;
    for (int j = i; j >= 0; --j) {
        std::cout << "El numero " << i - j << " ingresado fue: " << vector[j] << std::endl;
    }

    return 0;
}
