//Previo 7 Evelyn Feng Wu B82870
//Usa set container desordenado, se ordena de forma aleatoria
#include <iostream>
#include <unordered_set>//uso del set

using namespace std;


int main (){
    //Iniciando un unordered_set de tipo int
    unordered_set <int> numbers={1,100,10,70,100};//uso de set
     //Imprimiento del vector
    cout << "Los numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0;
}
//Resultado