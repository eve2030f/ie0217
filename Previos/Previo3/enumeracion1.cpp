//Previo 3 B82870
//asigna el valor de 'Wednesday' a una variable y luego imprime el día de 
//la semana correspondiente (incrementado en 1) utilizando esa variable

#include <iostream>

using namespace std; 

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday }; // Enumeración de los días de la semana

int main() {
    week today; // Declara una variable de tipo 'week' llamada 'today'

    today = Wednesday; // Asigna el valor de 'Wednesday' a 'today'

    cout << "Day " << today + 1; // Imprime el día de la semana (incrementado 1)

    return 0; // IMPRIME Dia 4
}

