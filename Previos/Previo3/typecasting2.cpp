//Previo 3 B82870 Eveyn F.

//inicializa una variable double, realiza dos tipos de conversiones de double a int (una utilizando el estilo C y otra utilizando el estilo de función) y muestra los resultados de ambas conversiones junto con el valor original de la variable double
#include <iostream> 
using namespace std; 

int main() {
    // Inicializando una variable double
    double num_double = 3.56;

    cout << "num_double = " << num_double << endl; // Imprime num_double

    // Conversión de estilo C de double a int
    int num_int1 = (int)num_double; // Convierte num_double a int

    cout << "num_int1 = " << num_int1 << endl; // Imprime num_int1

    // Conversión de estilo de función de double a int
    int num_int2 = int(num_double); // Convierte num_double a int

    cout << "num_int2 = " << num_int2 << endl; // Imprime de num_int2

    return 0; // num_double = 3.56, num_int1 = 3,num_int2 = 3
}