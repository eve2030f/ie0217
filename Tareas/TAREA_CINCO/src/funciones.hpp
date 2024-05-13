//Tarea 5 Evelyn Feng Wu B82870
// Expresiones regulares para validar un correo electronico
//funciones.hpp
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream> //biblioteca de entrada y salida de datos
#include <string>
#include <stdexcept> //biblioteca para excepciones
#include <regex> //biblioteca de expresiones regualres

class ValidadorEmail {
public:
    void validarCorreo(const std::string& correo);

private:
    void validarNombre(const std::string& nombre);
    void validarDominio(const std::string& dominio);
    void validarExtension(const std::string& extension);
};

#endif // FUNCIONES_HPP
