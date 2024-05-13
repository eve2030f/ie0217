//Tarea 5 Evelyn Feng Wu B82870
// Expresiones regulares para validar un correo electronico
//funciones.cpp
#include "funciones.hpp"


void ValidadorEmail::validarCorreo(const std::string& correo) {
    // Expresion regular para validar la direccion de correo electronico
    std::regex regexCorreo("([a-zA-Z0-9._-]+)@([a-zA-Z0-9.]+(?:\\.[a-zA-Z]{0,5}\\.[a-zA-Z]{2,6}|\\.[a-zA-Z]{2,6}))");

    if (correo.find('@') == std::string::npos) {
        throw std::invalid_argument("La direccion de correo electronico debe contener el caracter '@'.");
    }
    // Capturar partes de la direccion de correo electronico
    std::smatch match;
    if (std::regex_match(correo, match, regexCorreo)) {
        std::string nombre = match[1].str();
        std::string dominio = match[2].str();
        std::string extension;

        // Verificar si después del primer punto hay menos de 6 caracteres
        size_t primerPunto = dominio.find('.');
        size_t ultimoPunto = dominio.find_last_of('.');

        if (primerPunto != std::string::npos && primerPunto != ultimoPunto) {
            // Contar el número de puntos en el dominio
            int puntos = std::count(dominio.begin(), dominio.end(), '.');

            // Verificar si la extensión es compuesta y tiene solo 5 caracteres
            if (puntos > 1 && ultimoPunto - primerPunto - 1 == 5 && (ultimoPunto - primerPunto) >= 6) {
                // La extensión es compuesta, tomar el substring del penúltimo punto al final
                extension = dominio.substr(primerPunto + 1);
                dominio = dominio.substr(0, primerPunto);
            } else {
                // La extensión no es compuesta, tomar el substring del último punto al final
                extension = dominio.substr(ultimoPunto + 1);
                dominio = dominio.substr(0, ultimoPunto);
            }
        } else {
            // Si solo hay un punto o ninguno, la extensión es después del último punto
            size_t pos3 = dominio.find_last_of('.');
            extension = dominio.substr(pos3 + 1);
            dominio = dominio.substr(0, pos3);
        }

        // Validar el nombre, dominio y extension
        validarNombre(nombre);
        validarDominio(dominio);
        validarExtension(extension);
    } else {
        throw std::invalid_argument("Direccion de correo electronico no valida.");
    }
}

void ValidadorEmail::validarNombre(const std::string& nombre) {
    // Validar el nombre del correo
    if (nombre.empty()) {
        throw std::invalid_argument("El nombre de usuario no puede estar vacío.");
    }
    //no debe comenzar ni terminar con ., _ o -
    if (nombre.front() == '.' || nombre.front() == '-' || nombre.front() == '_'
        || nombre.back() == '.' || nombre.back() == '-' || nombre.back() == '_') {
        throw std::invalid_argument("El nombre de usuario no debe comenzar ni terminar con un punto, guion o guion bajo.");
    }
    //no debe tener mas de 15 caracteres excluyendo los puntos o guiones
    if (nombre.size() > 15) {
        throw std::invalid_argument("El nombre de usuario no debe tener mas de 15 caracteres.");
    }
    //no puede contener dos o mas caracteres especiales juntos
    if (nombre.find("..") != std::string::npos || nombre.find("--") != std::string::npos || nombre.find("__") != std::string::npos) {
        throw std::invalid_argument("El nombre de usuario no debe contener dos o mas caracteres especiales consecutivos.");
    }
}

void ValidadorEmail::validarDominio(const std::string& dominio) {
    // Valida el dominio
    if (dominio.empty()) {
        throw std::invalid_argument("El dominio no puede estar vacío.");
    }
    //validacion de letras o punto
    if (!std::isalpha(dominio.front()) || !std::isalpha(dominio.back())) {
        throw std::invalid_argument("El dominio debe comenzar y terminar con una letra.");
    }
    //valida longitud
    if (dominio.size() < 3 || dominio.size() > 30) {
        throw std::invalid_argument("El dominio debe tener entre 3 y 30 caracteres.");
    }
    //validacion de puntos seguidos
    if (dominio.find("..") != std::string::npos) {
        throw std::invalid_argument("El dominio no debe contener dos puntos consecutivos.");
    }
}

void ValidadorEmail::validarExtension(const std::string& extension) {
    // Valida la extension
    if (extension.empty()) {
        throw std::invalid_argument("La extension no puede estar vacía.");
    }
    //Valida tamano
    if (extension.size() < 2 || extension.size() > 6) {
        throw std::invalid_argument("La extension no cumple con los requisitos.");
    }
}
