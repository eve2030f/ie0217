//Previo 3 B82870 Eveyn F.



#include <iostream> 
using namespace std; 

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32 }; // Define la enumeración 'seasons' con valores asignados a cada estación

int main() {
    seasons s; // Declara una variable de tipo 'seasons' llamada 's'

    s = summer; // Asigna el valor 'summer' a la variable 's'

    cout << "Summer  " << s << endl; // Imprime "Summer" seguido del valor numérico correspondiente a 'summer'

    return 0; // IMPRIME Summer 4
    }