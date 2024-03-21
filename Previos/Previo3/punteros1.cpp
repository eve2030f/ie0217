//Previo 3 B82870 Eveyn F.
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d; // Declaración de un puntero a Distance y una variable Distance

    ptr = &d; // Asigna la dirección de 'd' al puntero 'ptr'

    cout << "Enter feet: "; // Solicita al usuario que ingrese los pies
    cin >> (*ptr).feet; // Lee los pies desde la entrada estándar y los asigna al miembro 'feet' de 'd'

    cout << "Enter inch: "; // Solicita al usuario que ingrese las pulgadas
    cin >> (*ptr).inch; // Lee las pulgadas desde la entrada estándar y las asigna al miembro 'inch' de 'd'

    cout << "Displaying information." << endl; // Imprime un mensaje indicando que se va a mostrar la información

    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches"; // Muestra la distancia en pies y pulgadas

    return 0; // Retorna 0 para
}
//imprime
//Enter feet: 200
//Enter inch: 30
//Displaying information.
//Distance = 200 feet 30 inchesv