//Laboratorio 2 Evelyn Feng Wu B82870

#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
//lo anterior es solo la estructura
class Empleado {
    protected: //3 atributos protegidos
        std::string nombre;
        int edad;
        double salario;

    public: //metodos publicos
        Empleado(std::string _string, int _edad, double _salario);

        //crea virtuales
        virtual ~Empleado(){} //destructor que limpia lo abierto al ejecutar el codigo
        virtual double calcularPago() const=0;//virtual puro o tipico : si o si se debe sobreescribir
        virtual void mostrarDetalles() const;// extra para la derivada
};

//virtual es lo q no esta definido en Empleado.cpp, se tiene q crear si o si se hace aca
//en clase derivada puede rear su propio metodo = virtual, le cae encima a la clase
//puro debe crear clase virtual de donde lo hereda
//clase derivada define metodo virtuals
#endif //EMPLEADO_HPP