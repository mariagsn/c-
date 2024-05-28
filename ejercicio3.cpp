#include <iostream>
#include <vector>

int main() {
    int n;

    // Pedimos el tamaño del arreglo
    std::cout << "Digite el tamaño del arreglo: ";
    std::cin >> n;

    // Creamos el arreglo de números con el tamaño ingresado
    std::vector<int> num(n);

    // A cada posición le damos un dato con el ciclo for
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite un numero para la posicion " << i + 1 << ": ";
        std::cin >> num[i]; // Leemos el número y lo almacenamos en el arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < n; ++i) {
        std::cout << "El dato en la posicion " << i + 1 << " es: " << num[i] << std::endl;
    }

    return 0;
}