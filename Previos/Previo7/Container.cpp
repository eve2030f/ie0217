//Previo 7 Evelyn Feng Wu B82870
//usando vector tipo container de secuencia
#include <iostream>
#include <vector> //biblioteca vector

using namespace std;


int main (){
    //Iniciando un vector de tipo int
    vector <int> numbers={1,100,10,70,100}; //uso de vector
     //Imprimiento del vector
    cout << "Los numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0;
}

//Resultado
//Los numeros son: 1, 100, 10, 70, 100, 