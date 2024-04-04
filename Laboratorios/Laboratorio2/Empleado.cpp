//Laboratorio 2 Evelyn Feng Wu B82870

#include "Empleado.hpp" //usa comillas para llamar archivos
#include <iostream> //<> para llamar bibliotecas

//puro
Empleado:: Empleado(std::string _nombre, int _edad, double _salario): //parametros
    nombre(_nombre), edad(_edad), salario(_salario) {}
    //asigna mnombres a atributos basado en parametro

//virtual
void Empleado::mostrarDetalles() const{
    //llama a las variables protegidas x eso sin _
    std::cout<<"Nombre: " << nombre<< std::endl; 
    std::cout<<"Edad: " << edad<< std::endl;
    std::cout<<"Salario: " << salario<< std::endl;

}
