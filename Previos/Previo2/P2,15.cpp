//Previo 2 B82870 PPT
// Programa para calcular el valor absoluto
// Funciona tanto para int como para float
#include <iostream> // Incluimos la biblioteca iostream
using namespace std;

// Función con parámetro de tipo float
float absolute(float var) {
    if (var < 0.0)
        var = -var; // Si es negativo, lo convertimos a positivo
    return var; // Devolvemos el valor absoluto
}

// Función con parámetro de tipo int
int absolute(int var) {
    if (var < 0)
        var = -var; // Si es negativo, lo convertimos a positivo
    return var; // Devolvemos el valor absoluto
}

int main() {
    // Llamamos a la función con parámetro de tipo int
    cout << "Valor absoluto de -5 = " << absolute(-5) << endl;

    // Llamamos a la función con parámetro de tipo float
    cout << "Valor absoluto de 5.5 = " << absolute(5.5f) << endl;

    return 0; // Indicamos que el programa finaliza correctamente
}

//RESULTADO
//Valor absoluto de -5 = 5
//Valor absoluto de 5.5 = 5.5