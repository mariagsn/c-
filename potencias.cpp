#include <iostream> 
using namespace std;

int main()
{
    int pot, num, resul = 1;

    cout << "Ingrese el número que quiere elevar a una potencia: ";
    cin >> num;  
    cout << "Ingrese a qué potencia lo quiere elevar: ";
    cin >> pot;  

    for(int i = 1; i <= pot; i++) {
        resul *= num;
    }

    cout << "El resultado de su potencia es: " << resul << endl;

    return 0;
}