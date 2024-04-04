//Laboratorio 2 Evelyn Feng Wu B82870
#include "EmpleadoPorHoras.hpp"

EmpleadoPorHoras::EmpleadoPorHoras (std:: string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}
    //usuario solo usa EmpleadoPorHoras
    //llamanos de Empleado 3 atributos y de horasTrabajadas las horas

//funcion
double EmpleadoPorHoras::calcularPago() const{ //llama por metodo virtual puro
    return salario * horasTrabajadas;
}
