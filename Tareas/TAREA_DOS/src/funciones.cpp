//Tarea 2 Evelyn Feng Wu B82870
/**
 * @file funciones.cpp
 * 
 * @author Evelyn Feng
 * @date 10/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#include "funciones.hpp"
#include <iostream>
#include <algorithm>

/**
 * @brief Constructor de la clase Pais.
 */
Pais::Pais(std::string _pais, std::string _continente, int _id_primo, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes):
    pais(_pais), continente(_continente), id_primo(_id_primo), id_desarrollo(_id_desarrollo), habitantes(_habitantes), cincog(_cincog), aeropuerto(_aeropuerto) {}

/**
 * @brief Constructor de la clase Planeta.
 */
Planeta::Planeta(std::string _continente, std::string _pais, int _id_primo, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes)
    : Pais(_pais, _continente, _id_primo, _id_desarrollo, _cincog, _aeropuerto, _habitantes) {}

/**
 * @brief Constructor de la clase Continentes.
 */
Continentes::Continentes(std::string _continente)
    : Pais("", _continente, 0, 0, false, false, 0) {}

/**
 * @brief Constructor de la clase Desarrollo.
 */
Desarrollo::Desarrollo(std::string _pais, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes)
    : Pais(_pais, "", 0, _id_desarrollo, _cincog, _aeropuerto, _habitantes) {}

/**
 * @brief Constructor de la clase PrimerMundo.
 */
PrimerMundo::PrimerMundo(std::string _pais, int _id_primo, bool _cincog, bool _aeropuerto, bool _habitantes)
    : Pais(_pais, "", _id_primo, 0, _cincog, _aeropuerto, _habitantes) {}

/**
 * @brief Método para mostrar información del país.
 */

void Pais::mostrarInfo() const {
    std::cout << "Información general:" << std::endl;
    std::cout << "El planeta posee 5 continentes." << std::endl;
    for (const auto& continente) {
        continente.printInfo();
    }
    std::cout << "De estos continentes, el avión pasa por los siguientes: América, Asia y Europa.\n";
}
/**
 * @brief Función para agregar un nuevo país. Verificacion del id para poner numero primo o no.
 */
bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}


void Pais::agregarPais() {
    std::string nombre;
    int habitantes;
    bool aeropuerto;
    bool cincog;
    std::string continente;

    std::cout << "Agregar nuevo país:\n";
    std::cout << "Seleccione el tipo de país:\n";
    std::cout << "1. Primer Mundo\n";
    std::cout << "2. Desarrollo\n";
    int tipo;
    std::cin >> tipo;

    if (tipo == 1) { // Si es del Primer Mundo
        id_primo = 0; // Establece el id_primo en 0 por defecto
        id_desarrollo = -1; // Indica que no es de desarrollo
    } else if (tipo == 2) { // Si es de Desarrollo
        id_primo = -1; // Indica que no es del Primer Mundo
        id_desarrollo = 0; // Establece el id_desarrollo en 0 por defecto
    } else {
        std::cout << "Tipo de país no válido.\n";
        return;
    }

    // Despliega los continentes disponibles
    std::cout << "Seleccione el continente:\n";
    for (const auto& cont : paises) {
        std::cout << cont->continente << std::endl;
    }

    std::cout << "Ingrese el continente: ";
    std::cin >> continente;

    std::cout << "Nombre del país: ";
    std::cin >> nombre;
    std::cout << "Número de habitantes: ";
    std::cin >> habitantes;
    std::cout << "¿Tiene aeropuerto? (1 para Sí, 0 para No): ";
    std::cin >> aeropuerto;
    std::cout << "¿Tiene 5G? (1 para Sí, 0 para No): ";
    std::cin >> cincog;

    // Generar ID aleatorio
    srand(time(NULL)); // Semilla para rand() basada en el tiempo actual
    int id;
    do {
        id = rand() % 1000 + 1; // Genera un número aleatorio entre 1 y 1000
    } while ((id_primo == 0 && !esPrimo(id)) || (id_desarrollo == 0 && esPrimo(id))); // Verifica si el número es primo o no primo según el tipo de país

    // Se crea un nuevo objeto de la clase actual y se agrega al vector de países
    paises.push_back(new Pais(nombre, continente, id_primo, id_desarrollo, cincog, aeropuerto, habitantes));
}

/**
 * @brief Función para eliminar un país.
 */

void Pais::eliminarPais() {
    if (paises.empty()) {
        std::cout << "No hay países para eliminar.\n";
        return;
    }

    std::string nombre;
    std::cout << "País a eliminar: ";
    std::cin >> nombre;

    auto it = std::find_if(paises.begin(), paises.end(), [&](Pais* pais) {
        return pais->pais == nombre;
    });

    if (it != paises.end()) {
        delete *it;
        paises.erase(it);
        std::cout << "País eliminado correctamente.\n";
    } else {
        std::cout << "El país no se encuentra en la lista.\n";
    }
}

/**
 * @brief Función para comparar países.
 */
bool compararPaises(const std::vector<Pais*>& paises) {
 std::cout << "Lista de países disponibles:\n";
    for (const auto& pais : paises) {
        std::cout << "- " << pais->nombre << std::endl;
    }

    std::string nombre_pais1, nombre_pais2;
    std::cout << "Ingrese el nombre del primer país: ";
    std::cin >> nombre_pais1;
    std::cout << "Ingrese el nombre del segundo país: ";
    std::cin >> nombre_pais2;

    // Busca los países en la lista por nombre
    Pais* pais1 = nullptr;
    Pais* pais2 = nullptr;
    for (const auto& pais : paises) {
        if (pais->nombre == nombre_pais1) {
            pais1 = pais;
        }
        if (pais->nombre == nombre_pais2) {
            pais2 = pais;
        }
    }

    // Verifica si ambos países fueron encontrados
    if (pais1 == nullptr || pais2 == nullptr) {
        std::cout << "Uno o ambos países no fueron encontrados en la lista.\n";
        return false; // No se pueden comparar los países si uno o ambos no fueron encontrados
    }

    // Verifica si ambos países son del mismo tipo
    if ((pais1->id_primo == 0 && pais2->id_primo == 0) || (pais1->id_desarrollo == 0 && pais2->id_desarrollo == 0)) {
        std::cout << "Los países " << nombre_pais1 << " y " << nombre_pais2 << " son del mismo tipo.\n";
        return true; // Ambos son del mismo tipo
    } else {
        std::cout << "Los países " << nombre_pais1 << " y " << nombre_pais2 << " son de tipos diferentes.\n";
        return false; // Los países son de tipos diferentes
    }
}
