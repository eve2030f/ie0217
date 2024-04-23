//Laboratorio 5 Evelyn Feng Wu B82870

#include "funciones.hpp"


//funciones
//funcion para agregar libro
    void Biblioteca::agregarLibro(const Libro& libro) {
        libros.push_back(libro); //usa push_back para añadir nuevo elemento al final del vector de libros
    }
//funcion de mostrar libros
    void Biblioteca::mostrarLibros() {
        for (const auto& libro : libros) { //para cada libro muestra su titulo, autor y año de publicacion seaprados por una coma
            std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
        }
    }
//funcion para ordenar libros segun la clase de Libro y de acuerdo al año de publicacion por el booleano usado con < para comparar años
    void Biblioteca::ordenarLibrosPorAnio() {
        std::sort(libros.begin(), libros.end()); 
    }
//funcion para buscar libro por título
    std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
        return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) { //busca del primero al ultimo segun el nombre
            return l.titulo == titulo; //revisa si el titulo ingresado se encuentra entre los de la clase biblioteca
        });
    }
//funcion para obtener iterador de finalizacion del vector de libros
    std::vector<Libro>::iterator Biblioteca::end() {
        return libros.end();
    }
