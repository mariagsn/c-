#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;

    // Pedimos el número de posiciones o tamaño
    std::cout << "Digite el numero de posiciones: ";
    std::cin >> n;

    // Creamos el arreglo de nombres con el tamaño ingresado
    std::vector<std::string> personas(n);

    // A cada posición le damos un dato con el ciclo for
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite un nombre para la posicion " << i << ": ";
        std::cin >> personas[i]; // Leemos el nombre y lo almacenamos en el arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < n; ++i) {
        std::cout << "El dato en la posicion " << i << " es: " << personas[i] << std::endl;
    }

    return 0;
}