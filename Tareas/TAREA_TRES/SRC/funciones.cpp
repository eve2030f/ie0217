//Tarea 3 Evelyn F. B82870

#include "funciones.hpp"
#include <iostream>

// Funciones de la clase Agenda

Agenda::Agenda() : primer_contacto(nullptr) {
    // Inicializa todas las entradas de la tabla a nullptr
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        tabla[i] = nullptr;
    }
}

Agenda::~Agenda() {
    // Libera la memoria de la lista enlazada
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        Contacto* temp = actual;
        actual = actual->siguiente;
        free(temp);
    }

    // Libera la memoria de la tabla hash
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        Contacto* actual = tabla[i];
        while (actual != nullptr) {
            Contacto* temp = actual;
            actual = actual->siguiente;
            delete temp;
        }
    }
}

size_t Agenda::funcion_hash(const std::string& nombre) {
    // Función hash para calcular el índice
    return std::hash<std::string>{}(nombre) % TAMANO_TABLA;
}

 // Funcion ligada a agregar nuevo contacto para que salga en orden alfabético 
void Agenda::agregarOrdenado(const std::string& nombre, const std::string& telefono) {
    Contacto* nuevo_contacto = (Contacto*)malloc(sizeof(Contacto)); //malloc
    nuevo_contacto->nombre = nombre;
    nuevo_contacto->telefono = telefono;
    nuevo_contacto->siguiente = nullptr; //inicia vacio hasta que carguen datos
    // Si es vacio o el nuevo contacto debe ir primero
    if (primer_contacto == nullptr || primer_contacto->nombre > nombre) {
        nuevo_contacto->siguiente = primer_contacto;
        primer_contacto = nuevo_contacto;
        return;
    }
    // Encuentra la posición correcta entonces agrega el nuevo contacto
    Contacto* actual = primer_contacto;
    while (actual->siguiente != nullptr && actual->siguiente->nombre < nombre) {
        actual = actual->siguiente;
    }
    // Sobreescribe nuevo contacto
    nuevo_contacto->siguiente = actual->siguiente;
    actual->siguiente = nuevo_contacto;
    
}


// Agrega un nuevo contacto a la lista enlazada y a la tabla hash
void Agenda::agregar() {
    std::string nombre, telefono;
    
    // Pide al usuario que ingrese el nombre del contacto
    std::cout << "\nIngrese el nombre del contacto: ";
    std::cin.ignore(); // Limpiar el buffer del teclado
    std::getline(std::cin, nombre); // Leer toda la línea de entrada con espacios, para poner nombre y apellido
    
    // Pide al usuario que ingrese el número de teléfono
    std::cout << "Ingrese el numero de telefono: ";
    std::getline(std::cin, telefono);

    // Agrega el contacto a la lista enlazada en orden alfabético
    agregarOrdenado(nombre, telefono);    
    
    // Índice hash
    size_t indice = funcion_hash(nombre);
    
    // Copia del nuevo contacto para almacenar en la tabla hash
    Contacto* nuevo_contacto_hash = new Contacto(nombre, telefono);    

    // Agrega en la tabla hash
    if (tabla[indice] == nullptr) {
        // Si el bucket está vacío, simplemente asignamos el nuevo contacto
        tabla[indice] = nuevo_contacto_hash;
    } else {
        // Si el bucket no está vacío, agregamos el nuevo contacto al final de la lista enlazada
        Contacto* actual = tabla[indice];
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo_contacto_hash;
    }
    
    std::cout << "Contacto insertado correctamente.\n";    
}



// Busca el telefono asociado al nombre dado
std::string Agenda::obtener() {
    std::string nombre;
    std::cout << "\nIngrese el nombre del contacto: ";
    std::cin.ignore(); 
    std::getline(std::cin, nombre); 

    // Buscar el contacto en la lista enlazada
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        if (actual->nombre == nombre) {
            return actual->telefono;
        }
        actual = actual->siguiente;
    }

    // Si el bucle termina sin encontrar el nombre, devuelve un mensaje de contacto no encontrado
    return "Contacto no encontrado";
}


// Elimina el contacto con el nombre proporcionado
void Agenda::eliminar() {
    std::string nombre;
    std::cout << "\nIngrese el nombre del contacto a eliminar: ";
    std::cin.ignore(); 
    std::getline(std::cin, nombre); 

    // Si la lista de contactos está vacía
    if (primer_contacto == nullptr) {
        std::cout << "La lista de contactos está vacía.\n";
        return;
    }

    // Si el primer contacto es el que se desea eliminar
    if (primer_contacto->nombre == nombre) {
        Contacto* temp = primer_contacto;
        primer_contacto = primer_contacto->siguiente;
        delete temp;
        std::cout << "Contacto eliminado correctamente.\n";
        return;
    }

    // Busca el contacto en la lista enlazada
    Contacto* actual = primer_contacto;
    while (actual->siguiente != nullptr) {
        if (actual->siguiente->nombre == nombre) {
            Contacto* temp = actual->siguiente;
            actual->siguiente = actual->siguiente->siguiente;
            delete temp;
            std::cout << "Contacto eliminado correctamente.\n";
            return;
        }
        actual = actual->siguiente;
    }

    std::cout << "Contacto no encontrado.\n";
}



// Elimina el contacto con el nombre proporcionado de la tabla hash
void Agenda::eliminar2(const std::string& nombre) {
    std::string nombre_contacto;
    std::cout << "\nIngrese el nombre del contacto a eliminar: ";
    std::cin.ignore(); 
    std::getline(std::cin, nombre_contacto);

    // Índice para el hash
    size_t indice = funcion_hash(nombre_contacto);

    // Verifica si el bucket no está vacío
    if (tabla[indice] != nullptr) {
        Contacto* contacto_actual = tabla[indice];
        Contacto* contacto_anterior = nullptr;

        // Recorre la lista enlazada buscando el contacto a eliminar
        while (contacto_actual != nullptr) {
            if (contacto_actual->nombre == nombre_contacto) {
                // Elimina el contacto actual de la tabla hash
                if (contacto_anterior == nullptr) {
                    // Si el contacto a eliminar es el primero de la lista enlazada
                    tabla[indice] = contacto_actual->siguiente;
                } else {
                    contacto_anterior->siguiente = contacto_actual->siguiente;
                }
                delete contacto_actual; // Libera la memoria del contacto eliminado
                std::cout << "Contacto eliminado correctamente.\n";
                return;
            }
            contacto_anterior = contacto_actual;
            contacto_actual = contacto_actual->siguiente;
        }
    } else {
        std::cout << "No hay contactos asociados a esta clave hash.\n";
    }
}



//Aca los datos si salen ordenados en orden alfabetico.
void Agenda::mostrarListaEnlazada() {
    cout << "\nContactos almacenados (Lista Enlazada o memoria):\n";
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << endl;
        actual = actual->siguiente;
    }
}


//Cabe destacar que este print de la tabla hash es para proporcionar acceso rapido a los datos por eso no salen ordenados alfabeticamente.
void Agenda::mostrarTablaHash() {
cout << "\nContactos almacenados (Tabla Hash o Cloud):\n";

    // Verifica si hay contactos en la tabla
    bool hayContactos = false;

    // Recorre toda la tabla hash
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        Contacto* actual = tabla[i];

        // Si hay un contacto en bucket
        if (actual != nullptr) {
            hayContactos = true;

            for (Contacto* contacto_i = actual; contacto_i != nullptr; contacto_i = contacto_i->siguiente) {
                for (Contacto* contacto_j = actual; contacto_j->siguiente != nullptr; contacto_j = contacto_j->siguiente) {
                    if (contacto_j->nombre > contacto_j->siguiente->nombre) {

                        Contacto* temp = contacto_j;
                        contacto_j = contacto_j->siguiente;
                        contacto_j->siguiente = temp;
                    }
                }
            }

            // Imprimir los contactos del bucket
            cout << "Indice " << i << ": ";
            for (Contacto* contacto = actual; contacto != nullptr; contacto = contacto->siguiente) {
                cout << "(Nombre: " << contacto->nombre << ", Telefono: " << contacto->telefono << ") ";
            }
            cout << endl;
        }
            // Si no se encontraron contactos en ningún bucket
        if (!hayContactos) {
            cout << "No hay contactos almacenados en la tabla." << endl;
        }
}
}