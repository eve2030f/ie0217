//Tarea 2 Evelyn Feng Wu B82870

/**
 * @file main.cpp
 * 
 * @author Evelyn Feng
 * @date 10/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */


#include <iostream>
#include "funciones.hpp"
#include <iostream>
#include "funciones.hpp"

/**
 * @brief Función principal del programa.
 * @return 0 si la ejecución fue exitosa.
 */
int main() {
    // Crear objetos de las clases PrimerMundo y Desarrollo
    PrimerMundo pais1("Estados Unidos", 2, true, true, 333300000);
    Desarrollo pais2("Costa Rica", 4, true, true, 5181000);

    int opcion;
    do {
        std::cout << "\nMenú Principal:\n";
        std::cout << "1. Mostrar Informacion General\n";
        std::cout << "2. Comparar Paises\n";
        std::cout << "3. Agregar Nuevo Pais\n";
        std::cout << "4. Eliminar Pais\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                {
                    // Crear un objeto Planeta para llamar al método mostrarInfo()
                    Planeta planeta("Mundo", "Tierra", 0, 0, true, true, true);
                    planeta.mostrarInfo();
                }
                break;
            case 2:
                pais2.compararPaises(); // Llamar al método compararPaises() del objeto pais2
                break;
            case 3:
                pais1.agregarPais(); // Llamar al método agregarPais() del objeto pais1
                break;
            case 4:
                pais1.eliminarPais(); // Llamar al método eliminarPais() del objeto pais1
                break;
            case 5:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
                break;
        }
    } while (opcion != 5);
    return 0;
}
