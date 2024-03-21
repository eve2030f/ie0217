//Previo 3 B82870 Eveyn F.
//paso de parametros por referencias sin punteros
#include <iostream>
using namespace std;

// Definición de la función para intercambiar números
void swap(int* n1, int* n2) {
    // Variable temporal 
    int temp;

    // Intercambio de los valores de n1 y n2 utilizando punteros
    temp = *n1; // Almacena el valor de n1 en temp
    *n1 = *n2;  // Asigna el valor de n2 a n1
    *n2 = temp; // Asigna el valor original de n1 (almacenado en temp) a n2
}

int main() {
    // Inicialización de variables
    int a = 1, b = 2;

    // Imprime los valores originales de a y b
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Imprime las direcciones de memoria de a y b
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    // Llama a la función 'swap' 
    swap(&a, &b);

    // Imprime los valores de a y b después del intercambio
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0; 
}
//resultado
//Before swapping
//a = 1
//b = 2
//&a = 0x7ffc6751a190
//&b = 0x7ffc6751a194
//
//After swapping
//a = 2
//b = 1