//Laboratorio 2 Evelyn Feng Wu B82870
#include "EmpleadoAsalariado.hpp"

//en el constructor usa la clase empleado
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {}

//metodo de EmpleadoAsalariado
double EmpleadoAsalariado::calcularPago() const {
    return salario;
}