//Tarea 3 Evelyn F. B82870
/**
 * @file agenda.hpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <functional>

/**
 * @brief Clase que representa un contacto en la agenda.
 */
class Contacto {
public:
    std::string nombre; /**< Nombre del contacto */
    std::string telefono; /**< Teléfono del contacto */
    Contacto* siguiente; /**< Puntero al siguiente contacto en la lista */
    
    /**
     * @brief Constructor de Contacto.
     * @param nombre Nombre del contacto.
     * @param telefono Teléfono del contacto.
     */
    Contacto(const std::string& nombre, const std::string& telefono) : nombre(nombre), telefono(telefono), siguiente(nullptr) {}
};

constexpr int TAMANO_TABLA = 100; /**< Tamaño de la tabla hash */

/**
 * @brief Clase que representa una agenda.
 */
class Agenda {
private:
    Contacto* primer_contacto; /**< Puntero al primer contacto en la lista enlazada */
    Contacto* tabla[TAMANO_TABLA]; /**< Tabla hash para almacenar los contactos */

public:
    /**
     * @brief Constructor de Agenda.
     */
    Agenda();
    
    /**
     * @brief Destructor de Agenda.
     */
    ~Agenda();

    /**
     * @brief Agrega un nuevo contacto a la agenda en orden alfabético.
     * @param nombre Nombre del contacto.
     * @param telefono Teléfono del contacto.
     */
    void agregarOrdenado(const std::string& nombre, const std::string& telefono);

    /**
     * @brief Agrega un nuevo contacto a la agenda.
     * @param nombre Nombre del contacto.
     * @param telefono Teléfono del contacto.
     */
    void agregar(const std::string& nombre, const std::string& telefono);

    /**
     * @brief Obtiene el teléfono asociado a un nombre de contacto.
     * @param nombre Nombre del contacto.
     * @return Teléfono del contacto o "Contacto no encontrado" si no se encuentra.
     */
    std::string obtener(const std::string& nombre);

    /**
     * @brief Elimina un contacto de la agenda.
     * @param nombre Nombre del contacto a eliminar.
     */
    void eliminar(const std::string& nombre);

    /**
     * @brief Elimina un contacto de la agenda utilizando la tabla hash.
     * @param nombre Nombre del contacto a eliminar.
     */
    void eliminar2(const std::string& nombre);

    /**
     * @brief Muestra los contactos almacenados en la lista enlazada.
     */
    void mostrarListaEnlazada();

    /**
     * @brief Muestra los contactos almacenados en la tabla hash.
     */
    void mostrarTablaHash();

    /**
     * @brief Función de dispersión hash para calcular el índice en la tabla hash.
     * @param nombre Nombre del contacto.
     * @return Índice en la tabla hash.
     */
    size_t funcion_hash(const std::string& nombre);
};
#endif // AGENDA_HPP