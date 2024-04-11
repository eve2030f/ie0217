//Laboratorio 3 B82870 Evelyn Feng 
#include "funciones.hpp"

//funciones
void agregarLibro(Libro*& lista) {  
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

    nuevoLibro->siguiente = lista; //actualiza el nuevo libro a lista
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