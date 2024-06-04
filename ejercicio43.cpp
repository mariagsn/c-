#include <iostream>

int main() {
    int numeros[10];
    int i;
    int mayor, menor, suma;
    
    std::cout << "Ingresa 10 numeros positivos: \n";
    
    for (i = 0; i < 10; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
        
        while (numeros[i] <= 0) {
            std::cout << "Ingresa un numero positivo: ";
            std::cin >> numeros[i];
        }
        
        if (i == 0) {
            mayor = menor = numeros[i];
            suma = numeros[i];
        } else {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
            suma += numeros[i];
        }
    }
    
    std::cout << "El mayor numero es: " << mayor << std::endl;
    std::cout << "El menor numero es: " << menor << std::endl;
    std::cout << "La suma de todos los numeros es: " << suma << std::endl;
    
    return 0;
}
