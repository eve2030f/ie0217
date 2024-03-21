//Previo 3 B82870 Eveyn F.

#include <iostream> 
using namespace std; 

#define BOOK_ID_MAX 10 // Define una macro para el valor máximo de identificación de libro

enum { // Define una enumeración 
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX // Constante para la cantidad máxima de casas
} casas_t; 

int main() {
    // Imprime el valor preprocesado de BOOK_ID_MAX
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    // Imprime la cantidad de casas en el condominio
    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0; // IMPRIME El valor de Book ID Max es: 10, La cantidad de casas en el condominio es: 3
}