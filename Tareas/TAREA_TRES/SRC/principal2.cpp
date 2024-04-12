//Tarea 3 Evelyn F. B82870
/**
 * @file principal2.cpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */

/**
 * @brief Esta es la funcion principal que despliega el menu.
 */

#include <iostream>
using namespace std;
#include "agenda.hpp"
#include "contacto.hpp"

/**
 * @brief Enumeración de opciones para el menú de la agenda.
 */
enum opciones {
    AGREGAR = 1,        /**< Opción para agregar un nuevo contacto */
    OBTENER,            /**< Opción para obtener el número de teléfono de un contacto */
    ELIMINAR_LISTA,     /**< Opción para eliminar un contacto de la memoria */
    ELIMINAR_TABLA,     /**< Opción para eliminar un contacto del Cloud */
    MOSTRAR_LISTA,      /**< Opción para mostrar todos los contactos de la lista enlazada */
    MOSTRAR_TABLA,      /**< Opción para mostrar todos los contactos del Cloud */
    SALIR,              /**< Opción para salir del programa */
    OPCIONES_MAX        /**< Número máximo de opciones */
};

/**
 * @brief Función principal que ejecuta el programa.
 * @return Devuelve 0 si el programa finaliza correctamente.
 */
int main() {
    Agenda agenda;
    agenda.agregar("Juan Gonzales", "8234-1234");
    agenda.agregar("Maria Flores", "8855-5678");
    agenda.agregar("Pedro Calderon", "6012-9876");
    std::string nombre, telefono;
    int opcion;

    while (true) {
        std::cout << "\nMenu:\n"; /**< Menu con 7 opciones */
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
                std::cout << "\nIngrese el nombre del contacto: ";
                std::cin.ignore(); /**< Limpia el buffer del teclado */
                std::getline(std::cin, nombre); /**< Leer toda la línea de entrada con espacios, para poner nombre y apellido*/
                std::cout << "Ingrese el numero de telefono: ";
                std::cin >> telefono;
                agenda.agregar(nombre, telefono);
                break;
            case OBTENER:
                std::cout << "\nIngrese el nombre del contacto: ";
                std::cin.ignore(); 
                std::getline(std::cin, nombre);
                std::cout << "Numero de telefono: " << agenda.obtener(nombre) << std::endl;
                break;
            case ELIMINAR_LISTA:
                std::cout << "\nIngrese el nombre del contacto a eliminar: ";
                std::cin.ignore(); 
                std::getline(std::cin, nombre);
                agenda.eliminar(nombre);
                break;
            case ELIMINAR_TABLA:
                std::cout << "\nIngrese el nombre del contacto a eliminar: ";
                std::cin.ignore(); 
                std::getline(std::cin, nombre);
                agenda.eliminar2(nombre);
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