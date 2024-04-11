//Laboratorio 3 B82870 Evelyn Feng 

// Libreria o biblioteca
#include <iostream>
#include <string>
using namespace std;

struct Libro{
    string titulo; // 3 miembros tipcos
    string autor;
    string genero;
    Libro* siguiente;  //puntero llamado sigueinte a una estructura de ese tipo
};

enum opciones{ // CREA ENUM PARA USAR EN VEZ DE NUMEROS EN EL CASE
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO,
    SALIR,
    OPCIONES_MAX // no se utiliza, el ulitmo miembro es usualmente el maximo para saber cuantas opciones tiene
};
//funcion
void agregarLibro(Libro*& lista) {   //se asume q es entero int &lista, puntero de lista q es un entero x referencia, referencia a una var libropuntero
    //crea nueva var libro puntero a traves del bew : reserva memoria dinamica en heap, creado con new pointer
    //se asigna con memoria dinamica
    Libro* nuevoLibro = new Libro;
    //nuevo titulo
    cout<<"Ingrese el titulo del libro: " << endl; //pide usuario el titulo
    cin.ignore(); //equivalente a limpiar el buffer

    getline(cin, nuevoLibro->titulo); 
    //usa flecha por el puntero, abarca incluso espacios, abarca todo lo q esta ingresandose x le ususario

    //nuevo autor
    cout<<"Ingrese el autor del libro: " << endl; //pide usuario el autor
    getline(cin, nuevoLibro->autor); 

    //nuevo autor
    cout<<"Ingrese el genero del libro: " << endl; //pide ususario el genero
    getline(cin, nuevoLibro->genero); 

    
    lista=nuevoLibro;

    cout<< "Libro agregado correctamente "<<endl;
}

void mostrarLibros(Libro* lista){
    if (lista==nullptr){
        cout<<"La libreria no tiene libros." << endl;
        return; //se sale de la funcion, aca muere
    }

    cout<< "Lista de libros: " << endl;
    while (lista != nullptr) { 
        cout<<"Titulo: " << lista->titulo<<endl;
        cout<<"Autor: " << lista->autor<<endl;
        cout<<"Genero: " << lista->genero<<endl<<endl; //pone dos para salto de linea
        lista=lista->siguiente; //aca se detiene, apunta al siguiente el siguiente pointer
    }
    

}

void liberarMemoria(Libro*& lista){
    while(lista!= nullptr){
        Libro* temp=lista;
        lista=lista->siguiente; //le cae encima a lista con siguiente
        delete temp;
    }

}

int main(){
    Libro* listaLibros=nullptr;
    int opcion;

    do{
        cout<< "Seleccina su opcion: "<< endl;
        cout<< "1. Agregar un libro "<< endl;
        cout<< "2. Mostrar todos los libros "<< endl;
        cout<< "3. Salir  "<< endl;
        cin>> opcion; //cin porque solo captura un digito

        switch(opcion){
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBRO:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout<< "Opcion no permitida."<<endl;
                break;
        }


    } while(opcion!=3);

    liberarMemoria(listaLibros);
}