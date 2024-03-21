//Laboratorio1 B82870 Evelyn F.
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Contacto.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos); //modifica valor original
void mostrarContactos(const Contacto listaContactos[], int numContactos);//solo lo accede al valor
void buscarContacto(const Contacto listaContactos[], int numContactos);
#endif 
//se agrega numContactos es para modificar la lista de contactos y agregarlo al final
//listaContactos envia valor de arreglo, puede modificar listaContactos y el numero que es entero
//FUNCIONES_HPP