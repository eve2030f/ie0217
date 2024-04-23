//Laboratorio 5 Evelyn Feng Wu B82870

#include "funciones.hpp"

int main() {
//instanciacion de la clase Biblioteca
    Biblioteca miBiblioteca;
//agrega elementos
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Orgullo y prejuicio", "Jane Austen", 1813});
    miBiblioteca.agregarLibro({"Cumbres Borrascosas", "Emily Bronte", 1847});
    miBiblioteca.agregarLibro({"Ulises", "James Joyce", 1922});
//llama a funciones
//ordena libros por año de publicacion
    miBiblioteca.ordenarLibrosPorAnio();
//muestra todos los libros de la lista
    miBiblioteca.mostrarLibros();
// con iteracion se usa auto para buscar por titulo
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) { //si se encuentra el libro, el iterador es distinto al valor final del vector de libros
        std::cout << "Libro encontrado: " << libro->titulo << std::endl; //encontro el libro
    } else {
        std::cout << "Libro no encontrado." << std::endl;//si no se encuentra, sale este mensaje
    }

    return 0;
}

//Resultado
//Orgullo y prejuicio, Jane Austen, 1813 
//Cumbres Borrascosas, Emily Bronte, 1847
//Ulises, James Joyce, 1922
//1984, George Orwell, 1949
//El señor de los anillos, J.R.R. Tolkien, 1954
//Cien años de soledad, Gabriel García Márquez, 1967
//Libro encontrado: 1984