//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Molde { //creando clase

    public: //variables publicas
        double largo;
        double ancho;
        double altura;
//Otra nomenclatura puede ser: 
// Molde(double largo_p, double ancho_p, double alto_p): largo(largo_p(), ancho(ancho_p), alto(alto_p) {}
// Otra
//// Molde(double largo_p, double ancho_p, double alto_p):
//double largo;
//double ancho;
//double altura;
    
    Molde() {  // CONSTRUCTOR DE LA CLASE: funcion que se ejecuta
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;
        }
//metodos dentro de clase
        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen(){   
            return largo * ancho * altura;
        }
};

int main(){

//lo primero que se ejeculta es el constructos
    Molde pared; // crea molde llamada pared, instancia pared es tipo molde

    //accede a miembros pues son publicos y declara
    pared.largo = 400.5; 
    pared.ancho = 20.8;
    pared.altura = 315.2;


    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
   
   
   