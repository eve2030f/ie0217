//Previo 3 B82870 Eveyn F.
#include <iostream>
using namespace std;

int main() {
    int var = 5; // Declara una variable entera 'var' e inicialízala con el valor 5
    int* pointVar; // Declara un puntero a entero 'pointVar'

    // Almacena la dirección de 'var' en 'pointVar'
    pointVar = &var;

    // Imprime el valor de 'var'
    cout << "var = " << var << endl;

    // Imprime el valor apuntado por 'pointVar' (el contenido de 'var')
    cout << "*pointVar = " << *pointVar << endl << endl;

    cout << "Changing value of var to 7:" << endl;

    // Cambia el valor de 'var' a 7
    var = 7;

    // Imprime el nuevo valor de 'var'
    cout << "var = " << var << endl;

    // Imprime el valor apuntado por 'pointVar' (debería ser el nuevo valor de 'var')
    cout << "*pointVar = " << *pointVar << endl << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // Cambia el valor apuntado por 'pointVar' a 16
    *pointVar = 16;

    // Imprime el nuevo valor de 'var'
    cout << "var = " << var << endl;

    // Imprime el valor apuntado por 'pointVar' (debería ser el mismo que 'var')
    cout << "*pointVar = " << *pointVar << endl;

    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}
//imprime
//var = 5
//*pointVar = 5
//
//Changing value of var to 7:
//var = 7
//*pointVar = 7
//
//Changing value of *pointVar to 16:
//var = 16
//*pointVar = 16