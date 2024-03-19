//Previo 2 B82870 PPT
// Programa que muestra cómo definir y llamar funciones con diferentes tipos y cantidades de parámetros

// Biblioteca iostream para usar cout y endl
#include <iostream>

// Para no tener que escribir "std::" delante de cout, endl, etc.
using namespace std;

// Función con dos parámetros: un entero y un double
void display(int var1, double var2) {
    // Mostramos el valor del entero y del double
    cout << "Número entero: " << var1;
    cout << " y número double: " << var2 << endl;
}

// Función con un parámetro de tipo double
void display(double var) {
    // Mostramos el valor del double
    cout << "Número double: " << var << endl;
}

// Función con un parámetro de tipo int
void display(int var) {
    // Mostramos el valor del entero
    cout << "Número entero: " << var << endl;
}

int main() {
    // Definimos una variable entera 'a' y le asignamos el valor 5
    int a = 5;
    // Definimos una variable double 'b' y le asignamos el valor 5.5
    double b = 5.5;

    // Llamamos a la función con un parámetro de tipo int
    display(a);

    // Llamamos a la función con un parámetro de tipo double
    display(b);

    // Llamamos a la función con dos parámetros: un entero y un double
    display(a, b);

    return 0; // Indicamos que el programa finaliza correctamente
}

//RESULTADO
//Número entero: 5
//Número double: 5.5
//Número entero: 5 y número double: 5.5