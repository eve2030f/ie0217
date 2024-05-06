//Previo 9 Evelyn Feng Wu B82870
#include <iostream>
#include "biblioteca.hpp"
//implementaciones y definiciones
void Biblioteca:: agregarLibro(
    const std::string& titulo,
    const std:: string& autor
){
    catalogo.emplace_back(titulo,autor);
}

void Biblioteca::mostrarCatalogo(){
    for(const auto& libro : catalogo){ //invoc ael mostrar info
        libro.mostrarInfo();
    }
}