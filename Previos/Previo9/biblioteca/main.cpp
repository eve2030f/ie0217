//Previo 9 Evelyn Feng Wu B82870
#include "biblioteca.hpp"
//instancia clase y agrega libros para mostrar catalogo
int main(){
    Biblioteca biblioteca;

    biblioteca.agregarLibro ("El Gran Gatsby", "F.Scott Fitzgerald");
    biblioteca.agregarLibro("1984","George Orwell");

    biblioteca.mostrarCatalogo();

    return 0;
}