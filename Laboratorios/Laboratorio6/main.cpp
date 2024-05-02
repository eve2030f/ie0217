//Laboratorio 6 Evelyn Feng Wu B82870 
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

//crea template
template <typename T> 

//clase estadistica para manejar distintos tipos de datos
class Statistics { 
    public:

    //constructor: const -> a elementos que no vamos a modificar. Recibe el data.
        Statistics(const std::vector<T>&data) : data(data){ 

            //verifica si esta vacio: argumento invalido como excepcion
            if(data.empty()){
                throw std::invalid_argument("La lista de datos debe contener elementos"); //uso de excepcion
            }
        } 

        //metodo de promedio de elementos
        double mean() const{
            T sum = 0;
            for (const T& value : data){
                sum += value;
            }
        return static_cast<double>(sum)/ data.size(); //retorna el promedio
        //viene todo parametrizado, suma elementos y lo divide entre la cantidad de elementos
        }

        //metodo de desviacion estandar
        double standardDeviation() const{
            double meanValue = mean();// se calcula en el metodo anterior y aca lo llama
            double sumSquares = 0;

            for (const T& value : data){
                sumSquares += (value -meanValue) * (value/meanValue);
            }
            return std::sqrt(sumSquares/data.size()); //retorna la formula de la desvest
        }


    private: //elemento privado dentro de la claseo clases amigas, variable T priv
        std::vector<T> data;

};

int main(){
    //se deberia identficar con un catch diferente cada error
    try{

    //carga intData
        std::vector<int> intData={1,2,3,4,5};
        //instancia con template
        
        Statistics <int> statsInt(intData); //carga dato de data creado en el template, ejecuta desde el constructor

        std::cout << "Media de intData: " <<statsInt.mean() <<std::endl;
        std::cout << "Desviacion estandar de intData: " <<statsInt.standardDeviation() <<std::endl; 
         //al ser un metodo se deben poner dos parentesis lueugo de llamarlo
        //si no lo pone se vuelve un callable, ejecute la porcion de codigo q empiece en esta direccion de memoria


    //carga doubleData    
        std::vector<double>doubleData = {1.5, 2.5, 3.5 ,4.5, 5.5};
        Statistics <double> statsDouble(doubleData); //cuidado con el <double> clase de var no cambia

        std::cout << "Media de doubleData: " <<statsInt.mean() <<std::endl;
        std::cout << "Desviacion estandar de doubleData: " <<statsInt.standardDeviation() <<std::endl;
       

    //crea vector de enteros
        std::vector<int> emptyData;  //ingresa lista vacia para porbar catch
        Statistics<int> statsEmpty  (emptyData); 
    } 
    
    catch(const std::invalid_argument& e) {
        std::cerr << "Excepcion encontrada: "<<e.what()<<std::endl; //el what funciona solo si en catch llama el invalid argument
    }

    return 0;
}


