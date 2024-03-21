//Previo 3 B82870 Eveyn F.

#include <iostream> 
using namespace std;

int main() {
    // Declaración de variables (se pueden declarar fuera de la función main, pero no se pueden inicializar fuera de ella)
    int var1 = 3;
    int var2 = 24; 
    int var3 = 17;

    // Imprimir dirección de memoria de var1
    cout << "Address of var1: " << &var1 << endl;

    // Imprimir dirección de memoria de var2 
    cout << "Address of var2: " << &var2 << endl;

    // Imprimir dirección de memoria de var3
    cout << "Address of var3: " << &var3 << endl;

    return 0; // Address of var1: 0x7ffecadd214c, Address of var2: 0x7ffecadd2150, Address of var3: 0x7ffecadd2154
}