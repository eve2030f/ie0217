//Tarea 3 Evelyn F. B82870
/**
 * @file funciones.cpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#include "agenda.hpp"
#include <iostream>
#include <functional>

/**
 * @brief Constructor de la clase Agenda.
 * 
 * Inicializa el puntero al primer contacto y todas las entradas de la tabla a nullptr.
 */
Agenda::Agenda() : primer_contacto(nullptr) {
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        tabla[i] = nullptr;
    }
}

/**
 * @brief Destructor de la clase Agenda.
 * 
 * Libera la memoria de la lista enlazada y de la tabla hash.
 */
Agenda::~Agenda() {
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        Contacto* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    for (int i = 0; i < TAMANO_TABLA; ++i) {
        Contacto* actual = tabla[i];
        while (actual != nullptr) {
            Contacto* temp = actual;
            actual = actual->siguiente;
            delete temp;
        }
    }
}

/**
 * @brief Agrega un nuevo contacto a la agenda en orden alfabético.
 * 
 * @param nombre Nombre del contacto.
 * @param telefono Teléfono del contacto.
 */
void Agenda::agregarOrdenado(const std::string& nombre, const std::string& telefono) {
    Contacto* nuevo_contacto = new Contacto(nombre, telefono);
    nuevo_contacto->siguiente = nullptr;

    if (primer_contacto == nullptr || primer_contacto->nombre > nombre) {
        nuevo_contacto->siguiente = primer_contacto;
        primer_contacto = nuevo_contacto;
        return;
    }

    Contacto* actual = primer_contacto;
    while (actual->siguiente != nullptr && actual->siguiente->nombre < nombre) {
        actual = actual->siguiente;
    }

    nuevo_contacto->siguiente = actual->siguiente;
    actual->siguiente = nuevo_contacto;
}

/**
 * @brief Agrega un nuevo contacto a la agenda.
 * 
 * @param nombre Nombre del contacto.
 * @param telefono Teléfono del contacto.
 */
void Agenda::agregar(const std::string& nombre, const std::string& telefono) {
    agregarOrdenado(nombre, telefono);
    size_t indice = funcion_hash(nombre);
    Contacto* nuevo_contacto_hash = new Contacto(nombre, telefono);
    if (tabla[indice] == nullptr) {
        tabla[indice] = nuevo_contacto_hash;
    } else {
        Contacto* actual = tabla[indice];
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo_contacto_hash;
    }
}

/**
 * @brief Obtiene el teléfono asociado a un nombre de contacto.
 * 
 * @param nombre Nombre del contacto.
 * @return Teléfono del contacto o "Contacto no encontrado" si no se encuentra.
 */
std::string Agenda::obtener(const std::string& nombre) {
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        if (actual->nombre == nombre) {
            return actual->telefono;
        }
        actual = actual->siguiente;
    }
    return "Contacto no encontrado";
}

/**
 * @brief Elimina un contacto de la agenda.
 * 
 * @param nombre Nombre del contacto a eliminar.
 */
void Agenda::eliminar(const std::string& nombre) {
    if (primer_contacto == nullptr) {
        std::cout << "La lista de contactos está vacía.\n";
        return;
    }

    if (primer_contacto->nombre == nombre) {
        Contacto* temp = primer_contacto;
        primer_contacto = primer_contacto->siguiente;
        delete temp;
        std::cout << "Contacto eliminado correctamente.\n";
        return;
    }

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

/**
 * @brief Elimina un contacto de la agenda utilizando la tabla hash.
 * 
 * @param nombre Nombre del contacto a eliminar.
 */
void Agenda::eliminar2(const std::string& nombre) {
    size_t indice = funcion_hash(nombre);

    if (tabla[indice] != nullptr) {
        Contacto* contacto_actual = tabla[indice];
        Contacto* contacto_anterior = nullptr;

        while (contacto_actual != nullptr) {
            if (contacto_actual->nombre == nombre) {
                if (contacto_anterior == nullptr) {
                    tabla[indice] = contacto_actual->siguiente;
                } else {
                    contacto_anterior->siguiente = contacto_actual->siguiente;
                }
                delete contacto_actual;
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

/**
 * @brief Muestra los contactos almacenados en la lista enlazada.
 */
void Agenda::mostrarListaEnlazada() {
    std::cout << "\nContactos almacenados (Lista Enlazada o memoria):\n";
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        std::cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << std::endl;
        actual = actual->siguiente;
    }
}

/**
 * @brief Muestra los contactos almacenados en la tabla hash.
 * 
 * Cabe destacar que este método no garantiza un orden alfabético, ya que se utiliza para proporcionar acceso rápido a los datos.
 */
void Agenda::mostrarTablaHash() {
    std::cout << "\nContactos almacenados (Tabla Hash o Cloud):\n";
    bool hayContactos = false;
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        Contacto* actual = tabla[i];
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

            std::cout << "Indice " << i << ": ";
            for (Contacto* contacto = actual; contacto != nullptr; contacto = contacto->siguiente) {
                std::cout << "(Nombre: " << contacto->nombre << ", Telefono: " << contacto->telefono << ") ";
            }
            std::cout << std::endl;
        }
    }
    if (!hayContactos) {
        std::cout << "No hay contactos almacenados en la tabla." << std::endl;
    }
}

/**
 * @brief Función de dispersión hash para calcular el índice en la tabla hash.
 * 
 * @param nombre Nombre del contacto.
 * @return Índice en la tabla hash.
 */
size_t Agenda::funcion_hash(const std::string& nombre) {
    return std::hash<std::string>{}(nombre) % TAMANO_TABLA;
}
