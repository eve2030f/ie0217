//Previo 4 B82870 Evelyn F
//header file; prototipo
#ifndef PERSONA_H 
#define PERSONA_H 

#include <string>

using namespace std; 

class Persona { //clase con atributos
private: 
    string nombre; 
    int edad; 

public: 
    Persona(string nombre, int edad); //constructor
    string getNombre(); 
    int getEdad(); 
    void setEdad(int edad); //recibe argumento de edad
}; 

#endif 
