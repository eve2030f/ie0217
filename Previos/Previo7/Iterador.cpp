
//Previo 7 Evelyn Feng Wu B82870
//iterador para contenedor
#include <iostream>
#include <vector>

using namespace std;

int main() {
     vector <string> languages= {"Python", "C++","Java"};

     //Creando un iterador asociado a un string vector

     vector <string>:: iterator itr;

     //iterar sobre todos los elementos 

     for (itr = languages.begin(); itr != languages.end();itr++){ //aumenta en 1 cuando es diferente
        cout << *itr<< ", "; //puntero a contenido de cada elemento, separado por coma y espacio
     }

    return 0;
}

//Resultado
//Python, C++, Java, 