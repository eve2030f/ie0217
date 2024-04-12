//Tarea 3 Evelyn F. B82870
#include <iostream>
using namespace std;
#include "agenda.hpp"
#include "contacto.hpp"

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
    agenda.agregar("Juan Gonzales", "8234-1234");
    agenda.agregar("Maria Flores", "8855-5678");
    agenda.agregar("Pedro Calderon", "6012-9876");
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
                std::cout << "\nIngrese el nombre del contacto: ";
                std::cin.ignore(); // Limpiar el buffer del teclado
                std::getline(std::cin, nombre); // Leer toda la línea de entrada con espacios, para poner nombre y apellido
                std::cout << "Ingrese el numero de telefono: ";
                std::cin >> telefono;
                agenda.agregar(nombre, telefono);
                break;
            case OBTENER:
                std::cout << "\nIngrese el nombre del contacto: ";
                std::cin.ignore(); 
                std::getline(std::cin, nombre);
                std::cout << "Numero de telefono: " << agenda.obtener(nombre) << endl;
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
