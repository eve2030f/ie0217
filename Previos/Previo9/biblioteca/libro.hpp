//Previo 9 Evelyn Feng Wu B82870
#ifndef LIBRO_HPP
#define LIBRO_HPP

#include<string>
//clase y constructor
class Libro {
    public:
    Libro( const std::string& titulo, const std::string& autor);
    void mostrarInfo() const;

    private:
    
    std:: string titulo;
    std:: string autor;
};

#endif