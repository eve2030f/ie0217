
//Laboratorio1 B82870 Evelyn F.

#include "Funciones.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos){
    Contacto nuevoContacto;
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;//happy path es asumir que sale bien que el usuariono se va a equivocar
    std::cout << "Ingrese el número de teléfono: ";
    std::cin >> nuevoContacto.telefono;

    listaContactos[numContactos++] = nuevoContacto; 
    //lleva elemento y aumenta mas uno el elem
    //actualiza cantidad de contactos en ese momento
}

void mostrarContactos(const Contacto listaContactos[], int numContactos){
    std::cout << "Lista de contactos:\n";
    for (int i = 0; i < numContactos; ++i){
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << "\n";
    }
}

void buscarContacto(const Contacto listaContactos[], int numContactos){
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;
    bool encontrado = false;
    //con el for muestra todos los contactos
    //itera haciendo un for sobre lista contactos
    for(int i = 0; i < numContactos; i++){
        if(listaContactos[i].nombre == nombreBusqueda){
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << "\n";
            encontrado = true;
            break;//para que se detenga una vez que se encuentr
        }
    }
    if (!encontrado){
        std::cout << "Contacto no encontrado.\n";
    } //es tipo void no hace falta devolver nungun valor return 0
}
