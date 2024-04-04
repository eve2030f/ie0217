//Laboratorio 2 Evelyn Feng Wu B82870
#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado{ //describir herencias como privadas o pubicas
    //se especifican atributos para evitar que caigan en privado si se le va, mayor orden
    private: //atributo privado solo accese la clase misma o las funciones amigas
        int horasTrabajadas; //nueva var
    
    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        double calcularPago() const override; //definimos aca xq es un metodo virtual puro x lo q siempre hay q llamarla
};

#endif //EMPLEADOPORHORAS_HPP