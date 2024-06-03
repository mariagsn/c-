#include <iostream>
#include <cstring>

int main() {
    char nom[20];
    char cont[20];
    int intentos = 3;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> nom;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> cont;

        if (strcmp(nom, "root") == 0 && strcmp(cont, "1234") == 0) {
            std::cout << "Bienvenido al sistema." << std::endl;
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos." << std::endl;
            } else {
                std::cout << "Se ha superado el número de intentos permitido." << std::endl;
                break;
            }
        }
    } while (intentos > 0);

    return 0;
}
