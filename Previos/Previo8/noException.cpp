//Previo 8 Evelyn Feng Wu B82870
//mala practica de programacion, no es robusto y facilmente se car
#include <iostream>
#include <stdexcept>

using namespace std;
int main(){
    int numerador,denominador, resultado;

    cout << "Enter numerator: ";
    cin >> numerador;

    cout << "Enter denominator: ";
    cin >> denominador;

    resultado = numerador/denominador;
    cout<< "El resultado es: " <<resultado<<endl;

    return 0;

}

//RESULTADO 1
//Enter numerator: 3
//Enter denominator: 0
//NO TIRA RESULTADO

//RESULTADO 2
//Enter numerator: 25
//Enter denominator: 5
//El resultado es: 5