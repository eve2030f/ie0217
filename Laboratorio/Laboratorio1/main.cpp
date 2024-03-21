//Laboratorio1 B82870 Evelyn F.
#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"
//cambia o precompila MAX_CONTACTOS por 100 despues de cada define

#define MAX_CONTACTOS 100 //defina MAX_CONTACTOS como 100

//enum seguido
enum Opciones {
    AGREGAR=1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

//instanciacion de la estructura , equivalente de int o float
int main(){
        Contacto listaContactos[MAX_CONTACTOS];

        int numContactos=0;
        int opcion;
        do{
            std::cout << "\nMenu:\n";
            std::cout << "1. Agregar Contacto\n";
            std::cout << "2. Mostrar Contactos\n";
            std::cout << "3. Buscar Contacto\n";
            std::cout << "4. Salir \n";//hay problema de escalabilidad 
            std::cout << "Ingrese su opcion:";
            std::cin >> opcion;



            switch(opcion){
                case AGREGAR:
                    agregarContacto(listaContactos, numContactos); 
                    //hay 3 maneras paso x referencia hace cambio en original, por puntero saca contenido en esa direccion de memoria
                    break;
                case MOSTRAR:
                    mostrarContactos(listaContactos, numContactos);
                    break;
                case BUSCAR:
                    buscarContacto(listaContactos, numContactos);
                    break;
                case SALIR:
                    std::cout<<"Saliendo del programa...\n";
                    break;
                default:
                    std::cout<< "Opcion no valida. Intente de nuevo.\n";
                    break;
            }


        }   while (opcion != SALIR);
        //asumiendo happy path

        return 0;
}
