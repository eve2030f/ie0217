//Previo 9 Evelyn Feng Wu B82870
#include <iostream>
#include "libro.hpp"
//implementaciones y definiciones
Libro :: Libro(
    const std::string& titulo, const std::string& autor
): titulo(titulo), autor (autor){}

void Libro :: mostrarInfo() const {
    std:: cout << "Titulo: " << titulo <<", Autor: "<< autor <<std::endl;

}