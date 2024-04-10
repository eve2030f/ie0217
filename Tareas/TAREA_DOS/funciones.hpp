//TAREA 2 Evelyn Feng Wu B82870
//Estructura
/**
 * @file funciones.hpp
 * 
 * @author Evelyn Feng
 * @date 10/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <string>
#include <vector>

/**
 * @brief Clase que representa un país.
 */
class Pais {
public:
    /**
     * @brief Constructor de la clase Pais.
     * @param _pais Nombre del país.
     * @param _continente Nombre del continente al que pertenece el país.
     * @param _id_primo ID primo del país.
     * @param _id_desarrollo ID de desarrollo del país.
     * @param _cincog Indica si el país es miembro del G5.
     * @param _aeropuerto Indica si el país tiene aeropuerto.
     * @param _habitantes Número de habitantes del país.
     */
    Pais(std::string _pais, std::string _continente, int _id_primo, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes);

    /**
     * @brief Destructor virtual de la clase Pais.
     */
    virtual ~Pais() {}

    /**
     * @brief Método virtual para mostrar información del país.
     */
    virtual void mostrarInfo() const;

    /**
     * @brief Método virtual para comparar el país con otros países.
     * @return Valor de comparación.
     */
    virtual double compararPaises() const;

    /**
     * @brief Método virtual para agregar un país.
     */
    virtual void agregarPais() const;

    /**
     * @brief Método virtual para eliminar un país.
     */
    virtual void eliminarPais() const;

    /**
     * @brief Método puro virtual para calcular el PIB del país.
     */
    virtual void calcPIB() const = 0;

    /**
     * @brief Método puro virtual para generar el ID del país.
     */
    virtual void generarid() const = 0;

    std::string continente; ///< Nombre del continente al que pertenece el país.
    std::string pais; ///< Nombre del país.
    bool cincog; ///< Indica si el país es miembro del G5.
    bool aeropuerto; ///< Indica si el país tiene aeropuerto.
    int habitantes; ///< Número de habitantes del país.
    int pib; ///< Producto Interno Bruto (PIB) del país.

protected:
    int id_primo; ///< ID primo del país.
    int id_desarrollo; ///< ID de desarrollo del país.
};

/**
 * @brief Clase que representa un planeta.
 * Hereda de la clase Pais.
 */
class Planeta : public Pais {
public:
    /**
     * @brief Constructor de la clase Planeta.
     * @param _continente Nombre del continente al que pertenece el planeta.
     * @param _pais Nombre del planeta.
     * @param _id_primo ID primo del planeta.
     * @param _id_desarrollo ID de desarrollo del planeta.
     * @param _cincog Indica si el planeta es miembro del G5.
     * @param _aeropuerto Indica si el planeta tiene aeropuerto.
     * @param _habitantes Número de habitantes del planeta.
     */
    Planeta(std::string _continente, std::string _pais, int _id_primo, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes);

    /**
     * @brief Destructor virtual de la clase Planeta.
     */
    virtual ~Planeta() {}

    /**
     * @brief Método virtual para mostrar información del planeta.
     */
    virtual void mostrarInfo() const;
};

/**
 * @brief Clase que representa los continentes.
 * Hereda de la clase Pais.
 */
class Continentes : public Pais {
public:
    /**
     * @brief Constructor de la clase Continentes.
     * @param _continente Nombre del continente.
     */
    Continentes(std::string _continente);
};

/**
 * @brief Clase que representa los países en desarrollo.
 * Hereda de la clase Pais.
 */
class Desarrollo : public Pais {
public:
    /**
     * @brief Constructor de la clase Desarrollo.
     * @param _pais Nombre del país en desarrollo.
     * @param _id_desarrollo ID de desarrollo del país.
     * @param _cincog Indica si el país es miembro del G5.
     * @param _aeropuerto Indica si el país tiene aeropuerto.
     * @param _habitantes Número de habitantes del país.
     */
    Desarrollo(std::string _pais, int _id_desarrollo, bool _cincog, bool _aeropuerto, bool _habitantes);

    /**
     * @brief Método virtual para comparar el país en desarrollo con otros países.
     * @return Valor de comparación.
     */
    virtual double compararPaises() const;

    /**
     * @brief Método virtual para calcular el PIB del país en desarrollo.
     */
    virtual void calcPIB() const;

    /**
     * @brief Método puro virtual para generar el ID del país en desarrollo.
     */
    virtual void generarid() const = 0;
};

/**
 * @brief Clase que representa los países del primer mundo.
 * Hereda de la clase Pais.
 */
class PrimerMundo : public Pais {
public:
    /**
     * @brief Constructor de la clase PrimerMundo.
     * @param _pais Nombre del país del primer mundo.
     * @param _id_primo ID primo del país.
     * @param _cincog Indica si el país es miembro del G5.
     * @param _aeropuerto Indica si el país tiene aeropuerto.
     * @param _habitantes Número de habitantes del país.
     */
    PrimerMundo(std::string _pais, int _id_primo, bool _cincog, bool _aeropuerto, bool _habitantes);

    /**
     * @brief Método virtual para calcular el PIB del país del primer mundo.
     */
    virtual void calcPIB() const;

    /**
     * @brief Método puro virtual para generar el ID del país del primer mundo.
     */
    virtual void generarid() const = 0;

private:
    /**
     * @brief Método privado puro virtual para calcular el número de contratados del país del primer mundo.
     * @return Número de contratados.
     */
    virtual double calcContratados() const = 0;
};

#endif // FUNCIONES_HPP
