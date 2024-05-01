//Previo 8 Evelyn Feng Wu B82870
//Archivo noException con  bloque try

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try {
        if (denominador == 0) {
            throw runtime_error("Error: el denominador no puede ser cero."); //error en tiempo de ejecucion Y RECIBE ARGUMENTO UN STRING
        }
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;

    } catch (const exception& e) { //nomenclatura especial, interpreta percepciones estandar de C++
        cerr << e.what() << endl; //averigua el error
    }

    return 0;
}

// RESULTADO
// Ingrese el numerador: 3
// Ingrese el denominador: 0
// Error: el denominador no puede ser cero.