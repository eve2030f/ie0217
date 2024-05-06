//Previo 9 Evelyn Feng Wu B82870

#ifndef ESTUDIANTE_HPP
#define ESTDUDIANTE_HPP

#include <string>

//clase
class Estudiante{
    public:
    //constructor
    Estudiante(const std::string& nombre, int edad);
    void mostrarDatos(); //metodo

    private:
    std::string nombre;
    int edad;
    int edad2;
};


#endif