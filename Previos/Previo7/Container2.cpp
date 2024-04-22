//Previo 7 Evelyn Feng Wu B82870
//Usa set container asociativo

#include <iostream>
#include <set>//uso de  set

using namespace std;


int main (){
    //Iniciando un vector de tipo int
    set <int> numbers={1,100,10,70,100};//uso del set
     //Imprimiento del vector
    cout << "Los numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0;
}
//Resultado
//Los numeros son: 1, 10, 70, 100, 
//devuelve elementos ordenados, orden no importa cuando se agrega elemento
//NO PERMITE ELEMENTOS REPETIDOS