#include <iostream>
#include <vector>

int main() {
    int fila = 3, colum = 4, acum = 0;

    std::vector<std::vector<int>> matriz(fila, std::vector<int>(colum));

    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < colum; ++j) {
            std::cout << "Digite dato para la fila " << i + 1 << ", columna " << j + 1 << ": ";
            std::cin >> matriz[i][j];
            acum += matriz[i][j]; 
        }
    }

    std::cout << "La tabla es:" << std::endl;
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < colum; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Todos los elementos suman un total de: " << acum << std::endl;

    return 0;
}