#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

int main() {
    // Definimos la matriz con 3 filas y 3 columnas
    int matriz[3][3];
    // Inicializamos la semilla del generador de números aleatorios
    std::srand(std::time(0));
    // Llenamos la matriz con números aleatorios entre 0 y 9
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = std::rand() % 10;
        }
    }
    // Mostramos todos los datos que hay en la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout;
    }

    return 0;
}