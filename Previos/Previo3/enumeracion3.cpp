//Previo 3 B82870 Eveyn F.
//define una enumeración para representar los palos de una baraja de cartas
//asigna el valor club a una variable de tipo suit 
//muestra el tamaño en bytes de la variable

#include <iostream> 
using namespace std;

enum suit {

club = 0,

diamonds = 10,

hearts = 20,

spades = 3

} card;

int main(){

card = club;

cout << "Size of enum variable " << sizeof(card) << " bytes."; return 0;
}
//IMPRIME Size of enum variable 4 bytes.