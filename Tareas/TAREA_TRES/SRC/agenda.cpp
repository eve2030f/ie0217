//Tarea 3 Evelyn F. B82870
/**
 * @file agenda.cpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#include "agenda.hpp"

size_t Agenda::funcion_hash(const string& nombre) {
    return hash<string>{}(nombre) % TAMANO_TABLA;
}

void Agenda::agregarOrdenado(const string& nombre, const string& telefono) {
    Contacto* nuevo_contacto = (Contacto*)malloc(sizeof(Contacto));
    nuevo_contacto->nombre = nombre;
    nuevo_contacto->telefono = telefono;
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

Agenda::Agenda() : primer_contacto(nullptr) {
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        tabla[i] = nullptr;
    }
}

Agenda::~Agenda() {
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        Contacto* temp = actual;
        actual = actual->siguiente;
        free(temp);
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

void Agenda::agregar(const string& nombre, const string& telefono) {
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

string Agenda::obtener(const string& nombre) {
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        if (actual->nombre == nombre) {
            return actual->telefono;
        }
        actual = actual->siguiente;
    }
    return "Contacto no encontrado";
}

void Agenda::eliminar(const string& nombre) {
    if (primer_contacto == nullptr) {
        cout << "La lista de contactos está vacía.\n";
        return;
    }

    if (primer_contacto->nombre == nombre) {
        Contacto* temp = primer_contacto;
        primer_contacto = primer_contacto->siguiente;
        free(temp);
        cout << "Contacto eliminado correctamente.\n";
        return;
    }

    Contacto* actual = primer_contacto;
    while (actual->siguiente != nullptr) {
        if (actual->siguiente->nombre == nombre) {
            Contacto* temp = actual->siguiente;
            actual->siguiente = actual->siguiente->siguiente;
            free(temp);
            cout << "Contacto eliminado correctamente.\n";
            return;
        }
        actual = actual->siguiente;
    }

    cout << "Contacto no encontrado.\n";
}

void Agenda::eliminar2(const string& nombre) {
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
                cout << "Contacto eliminado correctamente.\n";
                return;
            }
            contacto_anterior = contacto_actual;
            contacto_actual = contacto_actual->siguiente;
        }
    } else {
        cout << "No hay contactos asociados a esta clave hash.\n";
    }
}

void Agenda::mostrarListaEnlazada() {
    cout << "\nContactos almacenados (Lista Enlazada o memoria):\n";
    Contacto* actual = primer_contacto;
    while (actual != nullptr) {
        cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << endl;
        actual = actual->siguiente;
    }
}

void Agenda::mostrarTablaHash() {
    cout << "\nContactos almacenados (Tabla Hash o Cloud):\n";

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

            cout << "Indice " << i << ": ";
            for (Contacto* contacto = actual; contacto != nullptr; contacto = contacto->siguiente) {
                cout << "(Nombre: " << contacto->nombre << ", Telefono: " << contacto->telefono << ") ";
            }
            cout << endl;
        }
    }

    if (!hayContactos) {
        cout << "No hay contactos almacenados en la tabla." << endl;
    }
}