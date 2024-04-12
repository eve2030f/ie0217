//Tarea 3 Evelyn F. B82870

#include "funciones.hpp"
#include "contacto.hpp"
#include <iostream>

enum opciones{ // CREA ENUM PARA USAR EN VEZ DE NUMEROS EN EL CASE
    AGREGAR = 1,
    OBTENER,
    ELIMINAR_LISTA,
    ELIMINAR_TABLA,
    MOSTRAR_LISTA,
    MOSTRAR_TABLA,
    SALIR,
    OPCIONES_MAX // no se utiliza, el ulitmo miembro es usualmente el maximo para saber cuantas opciones tiene
};

int main() {
    Agenda agenda;
    std::string nombre, telefono;
    int opcion;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar contacto\n";
        std::cout << "2. Obtener numero de telefono\n";
        std::cout << "3. Eliminar contacto de la memoria\n";
        std::cout << "4. Eliminar contacto del Cloud\n";
        std::cout << "5. Mostrar todos los contactos lista enlazada\n";
        std::cout << "6. Mostrar todos los contactos Cloud\n";
        std::cout << "7. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case AGREGAR:

                agenda.agregar();
                break;
            case OBTENER:
                agenda.obtener();
                break;
            case ELIMINAR_LISTA:
                agenda.eliminar();
                break;
            case ELIMINAR_TABLA:
                agenda.eliminar2();
                break;
            case MOSTRAR_LISTA:
                agenda.mostrarListaEnlazada();
                break;
            case MOSTRAR_TABLA:
                agenda.mostrarTablaHash();
                break;
            case SALIR:
                std::cout << "Saliendo del programa.\n";
                return 0;
            default:
                std::cout << "Opcion invalida. Por favor, seleccione una opcion valida.\n";
                break;
        }
    }

    return 0;
}
