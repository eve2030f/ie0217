//PREVIO 5 B82870 EVELYN F.
//Lista Enlazada en C++
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Creando un nodo

class Node{
    public:
    int value;
    Node*next;//nodo puntero direccion del siguiente
};

int main(){
    Node*head;
    Node*one=NULL;
    Node*two= NULL;
    Node*three= NULL;

    //asigna memora a 3 nodos en el heap

    one = new Node(); //devuelve en punteros
    two =  new Node();
    three = new Node();

    //Asigna valores
    one -> value = 1; //si pone == sale 000 en salida, se cambio a = para que salga 123
    two -> value = 2;
    three -> value = 3;

    //Interconecta nodos
    one -> next= two;
    two -> next= three;
    three -> next= NULL;

    //Imprime la lista enlazada simple

    head= one;
    while (head != NULL){
        cout<< head -> value; //puntero usa flecha
        head= head -> next;
    }
}
//RESULTADO
//123