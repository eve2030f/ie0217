//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Molde {

    public:
        double largo;
        double ancho;
        double alto;

//constructor prueba en largo el largo_p y asi
        Molde(double largo_p, double ancho_p, double alto_p):largo(largo_p),ancho(ancho_p),alto(alto_p){
            cout << "Probando si se puede imprimir" << endl;
        }
// estos son los metodos pues son funciones dentro de la clase
        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen(){   
            return largo * ancho * alto;
        }
};

int main(){

    int variable_entera;

    Molde pared(10.0, 20.0, 35.0);

    //se debe indicar el objeto de los metodos a imprimir PARED.METODO
    cout << "El area es: " << pared.calcularArea() << endl;
    cout << "El volumen es: " << pared.calcularVolumen() << endl;

    return 0;
}