//Previo 9 Evelyn Feng Wu B82870
#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
//clase interna y constructor
#include <vector>
#include "libro.hpp" //muestra informacion de libros

using namespace std;

class Biblioteca{
    public:
        void agregarLibro(
            const std::string& titulo,
            const std::string& autor
    );
    void mostrarCatalogo();

    private:

    std:: vector <Libro> catalogo;


};


#endif