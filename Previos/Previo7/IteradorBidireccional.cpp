//Previo 7 Evelyn Feng Wu B82870
//iterador bidireccional, puede ir hacia adelante o hacia atras (list, set, mpa, multiset)
#include <iostream>
#include <list> 

using namespace std;

int main (){
    list<int> nums {1,2,3,4,5};
    //iniciando un iterador hacia un punto de principio de nums

    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " <<endl; //mueve hacia adelante

    //mostrando los elementos en orden "forward"

    while (itr != nums.end()){
        cout<< *itr << " ,";

        //mueve el iterador 1 posicion adelante

        itr++;
    }

    cout <<endl<< "Moviendose hacia atras: "<< endl;

    //mostrando los elementos en orden de atras a adelante
     while (itr != nums.begin()){
        if (itr != nums.end()){
            cout << *itr<<", ";
        }
     //moviendo el iterador una posicion  atras restando uno
     itr--;
     }
     cout << *itr<< endl;
     return 0;
}
//Resultado
//Moving forward: 
//1 ,2 ,3 ,4 ,5 ,
//Moviendose hacia atras: 
//5, 4, 3, 2, 1