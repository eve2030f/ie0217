
//Previo 3 B82870 Eveyn F.
// C++ Program to display address of each element of an array
#include <iostream>
using namespace std;

int main() {
    float arr[3]; // Declara un arreglo de 3 elementos de tipo float

    // Declarar un puntero de tipo float
    float *ptr;

    cout << "Displaying address using arrays:" << endl;

    // Usa un bucle for para imprimir las direcciones de todos los elementos del arreglo
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // Asigna la dirección del primer elemento del arreglo al puntero
    ptr = arr;

    cout << "\nDisplaying address using pointers:" << endl;

   
    // utilizando notación de puntero
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}

//imprime
//Displaying address using arrays:
//&arr[0] = 0x7fffe3b3ad5c
//&arr[1] = 0x7fffe3b3ad60
//&arr[2] = 0x7fffe3b3ad64
//
//Displaying address using pointers:
//ptr + 0 = 0x7fffe3b3ad5c
//ptr + 1 = 0x7fffe3b3ad60
//ptr + 2 = 0x7fffe3b3ad64