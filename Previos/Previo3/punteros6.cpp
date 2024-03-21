//Previo 3 B82870 Eveyn F.

#include <iostream>
using namespace std;

int main() {
    int var = 5; // Declara una variable entera 'var' e inicialízala con el valor 5

    // Declarar un puntero a entero 'pointVar'
    int* pointVar;

    // Almacena la dirección de 'var' en 'pointVar'
    pointVar = &var;

    // Imprime el valor de 'var'
    cout << "var = " << var << endl;

    // Imprime la dirección de 'var'
    cout << "Address of var (&var) = " << &var << endl << endl;

    // Imprime el valor del puntero '
    cout << "pointVar = " << pointVar << endl;

    // Imprime el contenido de la dirección apuntada 
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0; 
}
//resultado
//var = 5
//Address of var (&var) = 0x7ffdd5a9df6c
//
//pointVar = 0x7ffdd5a9df6c
//Content of the address pointed to by pointVar (*pointVar) = 5