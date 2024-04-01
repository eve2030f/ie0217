//Previo 4 B82870 Evelyn F

#include <iostream> 
#include "persona.hpp" 

using namespace std; 

int main() { 
    Persona p("Juan", 25);

    cout << "Nombre: " << p.getNombre() << endl; //usa metodos para imprimirlos
    cout << "Edad: " << p.getEdad() << endl; 

    p.setEdad(26); 

    cout << "Nueva edad: " << p.getEdad() << endl; //imprime 26
    return 0; 
}
