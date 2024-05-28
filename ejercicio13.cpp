#include <iostream>
#include <vector>

int main() {
    int f, c;

    // Pedimos el número de filas
    std::cout << "Digite el numero de filas: ";
    std::cin >> f;

    // Pedimos el número de columnas
    std::cout << "Digite el numero de columnas: ";
    std::cin >> c;

    // Declaramos la matriz con las dimensiones dadas
    std::vector<std::vector<int>> matriz(f, std::vector<int>(c));

    // Llenamos la matriz con datos proporcionados por el usuario
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << "Digite dato para la fila " << i + 1 << ", columna " << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
    }

    // Mostramos todos los datos que hay en la matriz
    std::cout << "Los datos que hay en la matriz son:";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << matriz[i][j] << " .";
        }
        std::cout;
    }

    return 0;
}