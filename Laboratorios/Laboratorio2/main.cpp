//Laboratorio 2 Evelyn Feng Wu B82870
#include <iostream>
#include "EmpleadoAsalariado.hpp"
#include "EmpleadoPorHoras.hpp"

//mismas variables que en los include
int main(){
    EmpleadoAsalariado emp1("Marito",30,2000);
    EmpleadoPorHoras emp2 ("Juana",25,10,40);

    std::cout << "Detalle del empleado asalariado:" <<std::endl;
    emp1.mostrarDetalles();
    std::cout<<"Pago: $" << emp1.calcularPago() <<std::endl;
    
    std::cout<<"\nDetalles del empleado por horas:" << emp1.calcularPago() <<std::endl;
    emp2.mostrarDetalles();
    std::cout<<"Pago: $" << emp2.calcularPago() <<std::endl;

    return 0;
}

//RESULTADO:
//Detalle del empleado asalariado:
//Nombre: Marito
//Edad: 30
//Salario: 2000
//Pago: $2000
//
//Detalles del empleado por horas:2000
//Nombre: Juana
//Edad: 25
//Salario: 10
//Pago: $400