//Previo 3 B82870 Eveyn F.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int *ptr; // Declaración de un puntero a entero
    int arr[5]; // Declaración de un arreglo de enteros de tamaño 5

    ptr = arr; // Asignación de la dirección de inicio del arreglo 'arr' al puntero 'ptr'

    // Calculando las direcciones de memoria de diferentes elementos del arreglo 'arr' utilizando aritmética de punteros
    int* ptr1 = ptr + 1; // Dirección de memoria de arr[1]
    int* ptr2 = ptr + 2; // Dirección de memoria de arr[2]
    int* ptr3 = ptr + 3; // Dirección de memoria de arr[3]
    int* ptr4 = ptr + 4; // Dirección de memoria de arr[4]

    // Imprimiendo las direcciones de memoria calculadas
    cout << "Dirección de memoria de arr[1]: " << ptr1 << endl;
    cout << "Dirección de memoria de arr[2]: " << ptr2 << endl;
    cout << "Dirección de memoria de arr[3]: " << ptr3 << endl;
    cout << "Dirección de memoria de arr[4]: " << ptr4 << endl;

    return 0;

    /// se arreglo el codigo para que imprimiera el puntero 
//Dirección de memoria de arr[1]: 0x7fff45c80774
//Dirección de memoria de arr[2]: 0x7fff45c80778
//Dirección de memoria de arr[3]: 0x7fff45c8077c
//Dirección de memoria de arr[4]: 0x7fff45c80780]
}
