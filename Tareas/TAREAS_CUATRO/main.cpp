//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
#include <iostream>
#include <vector>
#include <complex>
#include <stdexcept>
#include <algorithm>

//crea el template
template<typename T>

//crea la clase matriz que cada una tiene columnas y filas
class Matriz {
private:
    int filas; //numero de filas y columnas son enteros
    int columnas;
    std::vector<std::vector<T>> datos; //variable T

public:
    //constructor de la matriz
    Matriz(const std::vector<T>&datos) : filas(0), columnas(0) {}
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas));
    }
    ~Matriz() {}  //destructor para liberar memoria de la clase matriz

    void setDimensiones(int filas, int columnas) {
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser numeros positivos y diferentes de 0.");
        }
        this->filas = filas; //uso del this como puntero impliscito
        this->columnas = columnas;
        datos.resize(filas, std::vector<T>(columnas));
    }

    void llenarMatriz(const std::vector<T>& valores) {
        if (valores.size() != filas * columnas) {
            throw std::invalid_argument("La cantidad de elementos ingresados no coincide con las dimensiones de la matriz");
        }
        int k = 0;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cin >> datos[i][j];
            }
        }
    }


    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("El numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz");
        }
        Matriz<T> resultado(filas, otra.columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                resultado.datos[i][j] = 0;
                for (int k = 0; k < columnas; ++k) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado;
    }

    friend std::ostream& operator<<(std::ostream& os, const Matriz<T>& matriz) {
        for (const auto& fila : matriz.datos) {
            for (const auto& elem : fila) {
                os << elem << " ";
            }
            os << std::endl;
        }
        return os;
    }
};

template<typename T>
class OperacionesBasicas {
public:
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.filas != b.filas || a.columnas != b.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
    }

    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.columnas != b.filas) {
            throw std::invalid_argument("El numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz");
        }
    }
};

class ValidadorDeEntrada {
public:
    static void validarDimensiones(int tamano) {
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser positivas");
        }
    }
};

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas y columnas de las matrices: ";
    std::cin >> filas >> columnas;

    ValidadorDeEntrada::validarDimensiones(filas);
    ValidadorDeEntrada::validarDimensiones(columnas);

    std::vector<double> valoresA(filas * columnas);
    std::vector<double> valoresB(filas * columnas);
 
    std::cout << "Ingrese los elementos de la matriz A separados por espacios:\n";
    for (int i = 0; i < filas * columnas; ++i) {
        std::cin >> valoresA[i];
    }

    std::cout << "Ingrese los elementos de la matriz B separados por espacios:\n";
    for (int i = 0; i < filas * columnas; ++i) {
        std::cin >> valoresB[i];
    }


    Matriz<double> matrizA(filas, columnas);
    Matriz<double> matrizB(filas, columnas);
    

    matrizA.llenarMatriz(valoresA);
    matrizB.llenarMatriz(valoresB);

    try {
        Matriz<double> suma = matrizA + matrizB;
        std::cout << "La suma de las matrices es:\n" << suma;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Matriz<double> resta = matrizA - matrizB;
        std::cout << "La resta de las matrices es:\n" << resta;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Matriz<double> multiplicacion = matrizA * matrizB;
        std::cout << "El producto de las matrices es:\n" << multiplicacion;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
