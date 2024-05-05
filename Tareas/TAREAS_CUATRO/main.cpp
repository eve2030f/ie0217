//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cctype> // Para la funcion isdigit
#include <random> // Para generacion de numeros aleatorios
#include <chrono> // Para semilla aleatoria basada en el tiempo actual

// Clase para validar la entrada del usuario
class ValidacionDeEntrada {
public:
    static void validarDimension(int tamano) {
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser numeros positivos mayores a 0");
        }
    }

    static void validarNumero(const std::string& str) {
        for (char c : str) {
            if (!std::isdigit(c)) {
                throw std::invalid_argument("Debe ingresar solo numeros. Revisar la cantidad de valores digitados.");
            }
        }
    }
};

// Crear el template
template<typename T>
// Crear la clase matriz que cada una tiene columnas y filas
class Matriz {
private:
    int filas; // Numero de filas
    int columnas; // Numero de columnas
    std::vector<std::vector<T>> datos; // Datos de la matriz

public:
    // Constructor
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas));
    }

    // Destructor
    ~Matriz() {}

    // Método para llenar la matriz con valores ingresados por el usuario
    void llenarMatriz(const std::string& nombreMatriz) {
        std::cout << "Ingrese los elementos de la matriz " << nombreMatriz << " (separados por espacios): ";
        std::vector<T> valores;
        valores.reserve(filas * columnas); // Reservar espacio suficiente para evitar realocaciones

        int elementosIngresados = 0;
        T valor;

        while (std::cin >> valor) {
            valores.push_back(valor);
            elementosIngresados++;

            // Verificar si se ha ingresado la cantidad correcta de elementos
            if (elementosIngresados == filas * columnas) {
                break;
            }

            // Verificar que el siguiente caracter sea una espacio
            char siguienteCaracter;
            std::cin >> siguienteCaracter;
            if (siguienteCaracter != ' ') {
                throw std::invalid_argument("Error: Los elementos deben estar separados por espacios.");
            }
        }
        std::cin.ignore();
        // Verificar si se ingresaron suficientes elementos
        if (elementosIngresados != filas * columnas) {
            throw std::invalid_argument("Error: Debe ingresar la cantidad correcta de elementos.");
        }

        int k = 0;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                datos[i][j] = valores[k++];
            }
        }
    }

    // Método para mostrar la matriz
    void mostrarMatriz() const {
        for (const auto& fila : datos) {
            for (const auto& elemento : fila) {
                std::cout << elemento << " ";
            }
            std::cout << std::endl;
        }
    }

    // Método para llenar la matriz con valores aleatorios
    void llenarMatrizAleatoria() {
        // Semilla aleatoria basada en el tiempo actual
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);

        // Distribucion de numeros aleatorios

            std::uniform_real_distribution<std::complex> distribution(1.0f, 100.0f);
            for (int i = 0; i < filas; ++i) {
                for (int j = 0; j < columnas; ++j) {
                    datos[i][j] = distribution(generator);
                }
            }
    }

    // Operaciones con matrices
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

    // Funcion para sumar dos matrices
    void sumarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this + otra;
            std::cout << "La suma de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al sumar matrices: " << e.what() << std::endl;
        }
    }

    // Funcion para restar dos matrices
    void restarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this - otra;
            std::cout << "La resta de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al restar matrices: " << e.what() << std::endl;
        }
    }

    // Funcion para multiplicar dos matrices
    void multiplicarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this * otra;
            std::cout << "El producto de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al multiplicar matrices: " << e.what() << std::endl;
        }
    }
};

int main() {
    int filas, columnas;
    std::string input_filas, input_columnas;

    // Variable para almacenar el tipo de matriz seleccionado
    int tipoMatriz = 0;

    Matriz<int> matrizIntA(0, 0);
    Matriz<int> matrizIntB(0, 0);

    Matriz<float> matrizFloatA(0, 0);
    Matriz<float> matrizFloatB(0, 0);

    Matriz<std::complex> matrizComplejaA(0, 0);
    Matriz<std::complex> matrizComplejaB(0, 0);

    // Menu principal
    while (true) {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Seleccionar tipo de variable\n";
        std::cout << "2. Ingresar tamano de matrices y valores\n";
        std::cout << "3. Generar datos aleatorios para las matrices\n";
        std::cout << "4. Mostrar matrices ingresadas\n";
        std::cout << "5. Realizar operaciones\n";
        std::cout << "6. Finalizar programa\n";
        std::cout << "Ingrese su opcion: ";

        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::cout << "Seleccione el tipo de variable:\n";
                std::cout << "1. Entero\n";
                std::cout << "2. Flotante\n";
                std::cout << "3. Complejo\n";
                std::cin >> tipoMatriz;
                break;
            }
            case 2: {
                if (tipoMatriz == 0) {
                    std::cerr << "Primero seleccione el tipo de variable.\n";
                    break;
                }
                std::cout << "Ingrese el numero de filas: ";
                std::cin >> input_filas;
                std::cout << "Ingrese el numero de columnas: ";
                std::cin >> input_columnas;

                try {
                    ValidacionDeEntrada::validarNumero(input_filas);
                    ValidacionDeEntrada::validarNumero(input_columnas);
                    filas = std::stoi(input_filas);
                    columnas = std::stoi(input_columnas);
                    ValidacionDeEntrada::validarDimension(filas);
                    ValidacionDeEntrada::validarDimension(columnas);
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    break;
                }

                if (tipoMatriz == 1) {
                    matrizIntA = Matriz<int>(filas, columnas);
                    matrizIntB = Matriz<int>(filas, columnas);
                } else if (tipoMatriz == 2) {
                    matrizFloatA = Matriz<float>(filas, columnas);
                    matrizFloatB = Matriz<float>(filas, columnas);
                } else if (tipoMatriz == 3) {
                    matrizComplejaA = Matriz<std::complex>(filas, columnas);
                    matrizComplejatB = Matriz<std::complex>(filas, columnas);
                } else {
                    std::cerr << "Tipo de variable no válido\n";
                }

                try {
                    if (tipoMatriz == 1) {
                        matrizIntA.llenarMatriz("A");
                        matrizIntB.llenarMatriz("B");
                    } else if (tipoMatriz == 2) {
                        matrizFloatA.llenarMatriz("A");
                        matrizFloatB.llenarMatriz("B");
                    } else if (tipoMatriz == 3) {
                        matrizComplejaA.llenarMatriz("A");
                        matrizComplejaB.llenarMatriz("B");
                    }
                    }

                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }

                break;
            }
            case 3: {
                if (tipoMatriz == 0) {
                    std::cerr << "Primero seleccione el tipo de variable.\n";
                    break;
                }
                std::cout << "Ingrese el numero de filas: ";
                std::cin >> input_filas;
                std::cout << "Ingrese el numero de columnas: ";
                std::cin >> input_columnas;
                try {
                    ValidacionDeEntrada::validarNumero(input_filas);
                    ValidacionDeEntrada::validarNumero(input_columnas);
                    filas = std::stoi(input_filas);
                    columnas = std::stoi(input_columnas);
                    ValidacionDeEntrada::validarDimension(filas);
                    ValidacionDeEntrada::validarDimension(columnas);
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    break;
                }

                if (tipoMatriz == 1) {
                    matrizIntA = Matriz<int>(filas, columnas);
                    matrizIntB = Matriz<int>(filas, columnas);
                } else if (tipoMatriz == 2) {
                    matrizFloatA = Matriz<float>(filas, columnas);
                    matrizFloatB = Matriz<float>(filas, columnas);
                } else if (tipoMatriz == 3) {
                    matrizComplejaA = Matriz<std::complex>(filas, columnas);
                    matrizComplejaB = Matriz<std::complex>(filas, columnas);
                } else {
                    std::cerr << "Tipo de variable no válido\n";
                }

                try {
                    if (tipoMatriz == 1) {
                        matrizIntA.llenarMatrizAleatoria();
                        matrizIntB.llenarMatrizAleatoria();
                    } else if (tipoMatriz == 2) {
                        matrizFloatA.llenarMatrizAleatoria();
                        matrizFloatB.llenarMatrizAleatoria();
                    } else if (tipoMatriz == 3) {
                        matrizComplejaA.llenarMatrizAleatoria();
                        matrizComplejaB.llenarMatrizAleatoria();
                    } else {
                        std::cerr << "Tipo de variable no válido\n";
                    }
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                std::cout << "Datos aleatorios generados para las matrices.\n";
                break;
            }
            case 4: {
                if (tipoMatriz == 0) {
                    std::cerr << "Primero seleccione el tipo de variable.\n";
                    break;
                }
                if (tipoMatriz == 1) {
                    std::cout << "Matriz A:\n";
                    matrizIntA.mostrarMatriz();
                    std::cout << "Matriz B:\n";
                    matrizIntB.mostrarMatriz();
                } else if (tipoMatriz == 2) {
                    std::cout << "Matriz A:\n";
                    matrizFloatA.mostrarMatriz();
                    std::cout << "Matriz B:\n";
                    matrizFloatB.mostrarMatriz();
                } else if (tipoMatriz == 2) {
                    std::cout << "Matriz A:\n";
                    matrizComplejaA.mostrarMatriz();
                    std::cout << "Matriz B:\n";
                    matrizCompleaB.mostrarMatriz();
                } else {
                    std::cerr << "Tipo de variable no válido\n";
                }
                break;
            }
            case 5: {
                if (tipoMatriz == 0) {
                    std::cerr << "Primero seleccione el tipo de variable.\n";
                    break;
                }
                std::cout << "Operaciones disponibles:\n";
                std::cout << "1. Sumar matrices\n";
                std::cout << "2. Restar matrices\n";
                std::cout << "3. Multiplicar matrices\n";
                std::cout << "Ingrese su opcion: ";

                int operacion;
                std::cin >> operacion;

                switch (operacion) {
                    case 1: {
                        if (tipoMatriz == 1) {
                            matrizIntA.sumarMatrices(matrizIntB);
                        } else if (tipoMatriz == 2) {
                            matrizFloatA.sumarMatrices(matrizFloatB);
                        } else if (tipoMatriz == 3) {
                            matrizComplejaA.sumarMatrices(matrizComplejaB);
                        }
                        break;
                    }
                    case 2: {
                        if (tipoMatriz == 1) {
                            matrizIntA.restarMatrices(matrizIntB);
                        } else if (tipoMatriz == 2) {
                            matrizFloatA.restarMatrices(matrizFloatB);
                        }
                         else if (tipoMatriz == 3) {
                            matrizComplejaA.restarMatrices(matrizComplejaB);
                        break;
                    }
                    case 3: {
                        if (tipoMatriz == 1) {
                            matrizIntA.multiplicarMatrices(matrizIntB);
                        } else if (tipoMatriz == 2) {
                            matrizFloatA.multiplicarMatrices(matrizFloatB);
                        
                        } else if (tipoMatriz == 3) {
                            matrizComplejaA.multiplicarMatrices(matrizComplejaB);
                        
                        break;
                    }
                    default:
                        std::cerr << "Opcion no válida\n";
                        break;
                }
                break;
            }
            case 6: {
                std::cout << "Saliendo del programa.\n";
                return 0;
            }
            default:
                std::cerr << "Opcion no válida.\n";
                break;
        }
    }
    return 0;
}
}