//Tarea 5 Evelyn Feng Wu B82870
// Expresiones regulares para validar un correo electronico


#include "funciones.hpp"

int main() {
    ValidadorEmail validador;
    std::string opcion;

    // MENU DE OPCIONES
    do {
        std::cout << "----- MENU -----\n";
        std::cout << "1. Validar correo electronico\n";
        std::cout << "2. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        if (opcion == "1") {
            std::string correo;
            std::cout << "Ingrese una direccion de correo electronico: ";
            std::cin >> correo;

            try {
                validador.validarCorreo(correo);
                std::cout << "La direccion de correo electronico es valida." << std::endl;
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        } else if (opcion != "2") {
            std::cout << "Opcion no valida. Por favor, ingrese 1 o 2." << std::endl;
        }
    } while (opcion != "2");

    return 0;
}
