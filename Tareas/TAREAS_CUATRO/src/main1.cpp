//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates



/**
 * @file main1.cpp
 * 
 * @author Evelyn Feng
 * @date 5/5/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 
 * @brief Este archivo contiene la implementación de un programa para operaciones de matrices.
 Funcion principal del programa separado en 5 archivos cpp y hpp.
 */

#include <iostream>
#include "matriz.hpp"
#include "validacion.hpp"
#include "matriz.cpp"
int main() {
    int filas, columnas;
    std::string input_filas, input_columnas;

    // Variable para almacenar el tipo de matriz seleccionado
    int tipoMatriz = 0;

    Matriz<int> matrizIntA(0, 0);
    Matriz<int> matrizIntB(0, 0);

    Matriz<float> matrizFloatA(0, 0);
    Matriz<float> matrizFloatB(0, 0);

    Matriz<std::complex<float>> matrizComplejaA(0, 0);
    Matriz<std::complex<float>> matrizComplejaB(0, 0);

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
                    break;}
                else {
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
                    matrizComplejaA = Matriz<std::complex<float>>(filas, columnas);
                    matrizComplejaB = Matriz<std::complex<float>>(filas, columnas);
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
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    break;
                }
                break;
                }
                
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
                    matrizComplejaA = Matriz<std::complex<float>>(filas, columnas);
                    matrizComplejaB = Matriz<std::complex<float>>(filas, columnas);
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
                        matrizComplejaA.llenarMatrizAleatoria2();
                        matrizComplejaB.llenarMatrizAleatoria2();
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
                } else if (tipoMatriz == 3) {
                    std::cout << "Matriz A:\n";
                    matrizComplejaA.mostrarMatriz();
                    std::cout << "Matriz B:\n";
                    matrizComplejaB.mostrarMatriz();
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
                        } else if (tipoMatriz == 3) {
                            matrizComplejaA.restarMatrices(matrizComplejaB);
                        }
                        break;
                    }
                    case 3: {
                        if (tipoMatriz == 1) {
                            matrizIntA.multiplicarMatrices(matrizIntB);
                        } else if (tipoMatriz == 2) {
                            matrizFloatA.multiplicarMatrices(matrizFloatB);
                        } else if (tipoMatriz == 3) {
                            matrizComplejaA.multiplicarMatrices(matrizComplejaB);
                        }
                        break;
                    }
                    default:
                        std::cerr << "Opcion no válida\n";
                        return 0;
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
                return 0;
                break;
        }
    }
    return 0;
}
