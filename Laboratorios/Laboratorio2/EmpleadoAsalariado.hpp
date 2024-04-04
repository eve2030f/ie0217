//Laboratorio 2 Evelyn Feng Wu B82870
#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

class EmpleadoAsalariado : public Empleado{
    //hereda bajo mismas condiciones y mismos metodos y clases
    public:
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        double calcularPago() cont override; //lo debe llamar de nuevo porque es un virtual puro
    
};

#endif //EMPLEADOSASALAROADPS_HPP