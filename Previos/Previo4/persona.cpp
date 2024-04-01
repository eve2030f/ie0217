//Previo 4 B82870 Evelyn F

//funciones
#include "persona.hpp" 
using namespace std; 

Persona::Persona(string nombre, int edad) { //constructor
    this->nombre = nombre; //this asigna esa edad "este" es esta clase Persona
    this->edad = edad; 
}

string Persona::getNombre() { //indicar clase a la que pertenece
    return nombre; 
}

int Persona::getEdad() { 
    return edad; 
}

void Persona::setEdad(int edad) { 
    this->edad = edad; 
}
