//Tarea 3 Evelyn Feng Wu B82870
/**
 * @file matriz.hpp
 * @brief Archivo de cabecera para la clase Matriz.
 */

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <random>
#include <chrono>
#include <complex>

/**
 * @brief Clase que representa una matriz.
 * @tparam T Tipo de elementos de la matriz.
 */
template<typename T>
class Matriz {
private:
    int filas; /**< Número de filas */
    int columnas; /**< Número de columnas */
    std::vector<std::vector<T>> datos; /**< Datos de la matriz */

public:
    /**
     * @brief Constructor de la clase Matriz.
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    Matriz(int filas, int columnas);

    /**
     * @brief Destructor de la clase Matriz.
     */
    ~Matriz();

    /**
     * @brief Método para llenar la matriz con valores ingresados por el usuario.
     * @param nombreMatriz Nombre de la matriz para mostrar en los mensajes.
     * @throw std::invalid_argument si hay errores en la entrada del usuario.
     */
    void llenarMatriz(const std::string& nombreMatriz);

    /**
     * @brief Método para mostrar la matriz.
     */
    void mostrarMatriz() const;

    /**
     * @brief Método para llenar la matriz con valores aleatorios.
     */
    void llenarMatrizAleatoria();

    /**
     * @brief Método para llenar la matriz con valores aleatorios complejos.
     */
    void llenarMatrizAleatoria2();

    /**
     * @brief Sobrecarga del operador de suma para matrices.
     */
    Matriz<T> operator+(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de resta para matrices.
     */
    Matriz<T> operator-(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de multiplicación para matrices.
     */
    Matriz<T> operator*(const Matriz<T>& otra) const;

    /**
     * @brief Función para sumar dos matrices.
     */
    void sumarMatrices(const Matriz<T>& otra);

    /**
     * @brief Función para restar dos matrices.
     */
    void restarMatrices(const Matriz<T>& otra);

    /**
     * @brief Función para multiplicar dos matrices.
     */
    void multiplicarMatrices(const Matriz<T>& otra);
};

// Implementación de las funciones y métodos en el archivo .hpp

#endif // MATRIZ_HPP
