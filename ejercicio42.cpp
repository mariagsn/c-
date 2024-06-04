#include <iostream>

int main() {
    int numero[50];
    
    std::cout << "Los números impares hasta 50 son:\n";
    
    for (int i = 0; i < 50; i++) {
        numero[i] = 2 * i + 1;
        std::cout << "Numero " << i + 1 << ": " << numero[i] << std::endl;
    }
    
    return 0;
}
