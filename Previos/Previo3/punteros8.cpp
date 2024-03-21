//Previo 3 B82870 Eveyn F.
#include <iostream>
using namespace std;

// Definición de la estructura Distance
struct Distance {
    int feet;
    float inch;
};

int main() {
    // Declaración de un puntero ptr a la estructura Distance y una variable d de tipo Distance
    Distance *ptr, d;

    // Asignación de la dirección de d al puntero ptr
    ptr = &d;

    // Solicitar al usuario que ingrese los pies
    cout << "Enter feet: ";
    cin >> ptr->feet; // Leer los pies y asignarlos al miembro feet de d utilizando el operador de flecha (->)

    // Solicitar al usuario que ingrese las pulgadas
    cout << "Enter inch: ";
    cin >> ptr->inch; // Leer las pulgadas y asignarlas al miembro inch de d utilizando el operador de flecha (->)

    // Imprime
    cout << "Displaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches";

    return 0; 
}
//resultado
//Enter feet: 3000
//Enter inch: 200
//Displaying information.
//Distance = 3000 feet 200 inches