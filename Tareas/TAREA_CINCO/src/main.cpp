//Tarea 5 Evelyn Feng Wu B82870
// Expresiones regulares para validar un correo electronico
/**
 * @file main.cpp
 * 
 * @author Evelyn Feng
 * @date 5/12/24
 * @license MIT License
  * @brief* Menu de las expresiones regulares para validar un correo electronico. Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 
 
 */


#include "funciones.hpp"

/**
 * @brief Función principal que ejecuta el programa de validación de correos electrónicos.
 * 
 * Esta función crea un objeto ValidadorEmail y proporciona un menú de opciones para que el usuario
 * pueda validar direcciones de correo electrónico ingresadas por él mismo.
 * 
 * @return 0 si el programa se ejecuta exitosamente.
 */
 
int main() {
    ValidadorEmail validador; // Instancia del validador de correos electrónicos
    std::string opcion; // Variable para almacenar la opción elegida por el usuario

    // MENU DE OPCIONES
    do {
        std::cout << "----- MENU -----\n";
        std::cout << "1. Validar correo electronico\n";
        std::cout << "2. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        if (opcion == "1") {
            std::string correo; // Variable para almacenar la dirección de correo electrónico ingresada por el usuario
            std::cout << "Ingrese una direccion de correo electronico: ";
            std::cin >> correo;

            try {
                validador.validarCorreo(correo); // Validación de la dirección de correo electrónico ingresada
                std::cout << "La direccion de correo electronico es valida." << std::endl;
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: " << e.what() << std::endl; // Manejo de excepciones en caso de errores de validación
            }
        } else if (opcion != "2") {
            std::cout << "Opcion no valida. Por favor, ingrese 1 o 2." << std::endl; // Mensaje de error para opciones inválidas
        }
    } while (opcion != "2"); // Repete el menú hasta que el usuario elija salir

    return 0; // Fin del programa
}