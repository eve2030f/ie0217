//Previo 7 Evelyn Feng Wu B82870
#include <iostream>
#include <forward_list> // lee y escribe 
using namespace std;

int main (){

    forward_list<int>nums{1,2,3,4}; //crea lista

    //crea iterador q comienza desde el inicio del forward
    
    forward_list<int>::iterator itr= nums.begin();

    while (itr !=nums.end()){
        //accesando el valor del iterador usando un operador sin direccion

        int original_value= *itr;

        //asignando un valor nuevo utilizando un operador sin direccion

        *itr= original_value*2; //numero por 2

        //moviendo el iterador hacia adelante, que es la siguiente posicion
        //aumenta en una unidad el puntero
        itr ++;
    }
    //mostrando el contenido de los numeros
    for (int num: nums){
        cout<<num<<",";
    }
    return 0;
}

//Resultado
//2,4,6,8,