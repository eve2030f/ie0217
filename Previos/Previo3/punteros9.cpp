//Previo 3 B82870 Eveyn F.
#include <iostream>
using namespace std;
//Paso de parametros por referencia sin puntos
// Función para intercambiar valores
void swap(int &n1, int &n2) {
    int temp = n1;  
    n1 = n2;        
    n2 = temp;      
}

int main() {
    // Inicialización de variables
    int a = 1, b = 2;
    
    cout << "Antes del intercambio" << endl;
    cout << "a = " << a << endl; // Muestra el valor de a antes del intercambio
    cout << "b = " << b << endl; // Muestra el valor de b antes del intercambio

    // Llamada a la función para intercambiar los números
    swap(a, b);

    cout << "\nDespués del intercambio" << endl;
    cout << "a = " << a << endl; // Muestra el valor de a después del intercambio
    cout << "b = " << b << endl; // Muestra el valor de b después del intercambio

    return 0;
}
//resultado
//Antes del intercambio
//a = 1
//b = 2
//
//Después del intercambio
//a = 2
//b = 1
