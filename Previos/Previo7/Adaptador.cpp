//Previo 7 Evelyn Feng Wu B82870
//Usando adaptadores de contenedor, una pila es un adaptador, depende de contenedor secuencial
#include <iostream>
#include <stack> //uso de pila
using namespace std;

int main (){
    //crear un stack de ints

    stack <int> numbers;
    //agregando elementos al stack
    numbers.push(1);
    numbers.push(100);
    numbers.push (10);

    cout<< "Numbers are: ";

    //Se puede accesar un elemento agarrando el elemento de arriba, y sacando elementos hasta que
    //el stack este vacio

    while(!numbers.empty()){
        //print top element

        cout<< numbers.top()<< ", ";

        //saca o elimina (pop) los elementos del stack

        numbers.pop();

    }
return 0;

}
//Resultado
//Numbers are: 10, 100, 1, 