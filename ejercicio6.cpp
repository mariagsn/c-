#include <iostream>
#include <vector>

int main() {
    int t, num, acum = 0;

    // Pedimos el tamaño del vector (arreglo)
    std::cout << "Digite el tamano del vector (arreglo): ";
    std::cin >> t;

    // Creamos el arreglo y le pasamos el tamaño ingresado
    std::vector<int> vector(t);

    // Llenamos el arreglo con un ciclo for
    for (int i = 0; i < t; ++i) {
        // Pedimos los números
        std::cout << "Digite un numero: ";
        std::cin >> num;

        vector[i] = num; // Le damos al vector los números ingresados
        acum += vector[i]; // Acumulamos los números y los sumamos
    }

    // Imprimimos todos los datos del arreglo
    for (int i = 0; i < t; ++i) {
        std::cout << "El dato en la posicion " << i + 1 << " es: " << vector[i] << std::endl;
    }

    // Resultado total
    std::cout << "La suma de todos los numeros es: " << acum << std::endl;

    return 0;
}