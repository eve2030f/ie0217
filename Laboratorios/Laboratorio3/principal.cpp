//Laboratorio 3 B82870 Evelyn Feng 
#include <iostream>
#include "funciones.hpp"
#include "libro.hpp"

enum opciones{ // CREA ENUM PARA USAR EN VEZ DE NUMEROS EN EL CASE
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO,
    SALIR,
    OPCIONES_MAX // no se utiliza, el ulitmo miembro es usualmente el maximo para saber cuantas opciones tiene
};

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