#include <iostream>
#include <string>
#include <list>

using namespace std;

class Contacto { //se crea una clase contacto para almacenar el contacto
public:
    string nombre;
    string telefono;
    Contacto* siguiente; // es el puntero para el siguiente contacto en la lista enlazada
    // Constructor que inicializa los datos del contacto
    Contacto(const string& nombre, const string& telefono) : nombre(nombre), telefono(telefono), siguiente(nullptr) {}
};

class Agenda {
private:
    Contacto* primer_contacto; //puntero para primer dato
    static const int TAMANO_TABLA = 50; //se pone 50 pero puede incrementarse, es flexible
    Contacto* tabla[TAMANO_TABLA];//tabla hash 


    size_t funcion_hash(const string& nombre) {//funcion para asignar un indice, se usa el estandar
        return hash<string>{}(nombre) % TAMANO_TABLA;
    }


    // Funcion ligada a agregar nuevo contacto para que salga en orden alfabético 
    void agregarOrdenado(const string& nombre, const string& telefono) {
        Contacto* nuevo_contacto = (Contacto*)malloc(sizeof(Contacto));
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

public:
    Agenda() : primer_contacto(nullptr) {
        // Inicializa todas las entradas de la tabla a nullptr
        for (int i = 0; i < TAMANO_TABLA; ++i) {
            tabla[i] = nullptr;
        }
    }

    ~Agenda() {
        // Libera la memoria de lista enlazada
        Contacto* actual = primer_contacto;
        while (actual != nullptr) {
            Contacto* temp = actual;
            actual = actual->siguiente;
            free(temp); //malloc
        }

        // Libera la memoria en la tabla hash
        for (int i = 0; i < TAMANO_TABLA; ++i) {
            Contacto* actual = tabla[i];
            while (actual != nullptr) {
                Contacto* temp = actual;
                actual = actual->siguiente;
                delete temp; //hash
            }
        }
    }

//agrega  a memoria y copia en hash
    void agregar(const string& nombre, const string& telefono) {
        // agregar en la lista enlazada en orden alfabetico
        agregarOrdenado(nombre, telefono);

        // Indice hash
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
    }

    string obtener(const string& nombre) {
        // Busca el contacto en la lista enlazada
        Contacto* actual = primer_contacto;
        while (actual != nullptr) {
            if (actual->nombre == nombre) {
                return actual->telefono;
            }
            actual = actual->siguiente;
        }
        return "Contacto no encontrado";


    }

//elimina contacto en lista enlazada o memoria
    void eliminar(const string& nombre) {
        //Si no esta
        if (primer_contacto == nullptr) {
            cout << "La lista de contactos está vacía.\n";
            return;
        }
        //Si encuentra igualdad
        if (primer_contacto->nombre == nombre) {
            Contacto* temp = primer_contacto;
            primer_contacto = primer_contacto->siguiente;
            free(temp);
            cout << "Contacto eliminado correctamente.\n";
            return;
        }
        //actualiza por medio de variable temporal
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

//elimina contacto en hash o cloud
    void eliminar2(const string& nombre) {
    // indice para el hash
    size_t indice = funcion_hash(nombre);

    // Si tabla hash no es nullptr
    if (tabla[indice] != nullptr) {
        Contacto* contacto_actual = tabla[indice];
        Contacto* contacto_anterior = nullptr;

        // Recorre la lista enlazada buscando el contacto a eliminar
        while (contacto_actual != nullptr) {
            if (contacto_actual->nombre == nombre) {
                // Elimina el contacto actual de la tabla hash
                if (contacto_anterior == nullptr) {
                    // Si el contacto a eliminar es el primero de la lista enlazada
                    tabla[indice] = contacto_actual->siguiente;
                } else {
                    contacto_anterior->siguiente = contacto_actual->siguiente;
                }
                delete contacto_actual; // Libera la memoria del contacto eliminado
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

//Aca los datos si salen ordenados en orden alfabetico.
    void mostrarListaEnlazada() {
        cout << "\nContactos almacenados (Lista Enlazada o memoria):\n";
        Contacto* actual = primer_contacto;
        while (actual != nullptr) {
            cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << endl;
            actual = actual->siguiente;
        }
    }

//cabe destacar que este print de la tabla hash es para proporcionar acceso rapido a los datos por eso no salen ordenados alfabeticaente.
    void mostrarTablaHash() {
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
    }

    // Si no se encontraron contactos en ningún bucket
    if (!hayContactos) {
        cout << "No hay contactos almacenados en la tabla." << endl;
    }
}

};

int main() {
    Agenda agenda;
    agenda.agregar("Juan Gonzales", "8234-1234");
    agenda.agregar("Maria Flores", "8855-5678");
    agenda.agregar("Pedro Calderon", "6012-9876");

    int opcion;
    string nombre, telefono;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Obtener numero de telefono\n";
        cout << "3. Eliminar contacto de la memoria\n";
        cout << "4. Eliminar contacto del Cloud\n";
        cout << "5. Mostrar todos los contactos lista enlazada\n";
        cout << "6. Mostrar todos los contactos Cloud\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese el nombre del contacto: ";
                cin.ignore(); // Limpiar el buffer del teclado
                getline(cin, nombre); // Leer toda la línea de entrada con espacios, para poner nombre y apellido
                cout << "Ingrese el numero de telefono: ";
                cin >> telefono;
                agenda.agregar(nombre, telefono);
                cout << "Contacto insertado correctamente.\n";
                break;
            case 2:
                cout << "\nIngrese el nombre del contacto: ";
                cin.ignore(); 
                getline(cin, nombre); 
                telefono = agenda.obtener(nombre);
                cout << "Numero de telefono de " << nombre << ": " << telefono << endl;
                break;
            case 3:
                cout << "\nIngrese el nombre del contacto a eliminar: ";
                cin.ignore(); 
                getline(cin, nombre); 
                agenda.eliminar(nombre);
                break;
            case 4:
                cout << "\nIngrese el nombre del contacto a eliminar: ";
                cin.ignore(); 
                getline(cin, nombre); 
                agenda.eliminar2(nombre);
                break;
            case 5:
                agenda.mostrarListaEnlazada();
                break;
            case 6:
                agenda.mostrarTablaHash();
                break;
            case 7:
                cout << "Saliendo del programa.\n";
                return 0;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida.\n";
                break;
        }
    }

    return 0;
}
