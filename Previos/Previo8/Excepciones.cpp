//Previo 8 Evelyn Feng Wu B82870
//Excepciones: eventos inesperados en la ejecucion de un programa
#include <iostream>
using namespace std;

int main (){
    double numerator,denominator,divide; //define 3 variables tipo double

    cout<< "Ingrese Numerador: " ;
    cin>> numerator; 

    cout<< "Ingrese Denominador: ";
    cin>> denominator;

    try{ // intenta ejecutar cierto porcion de codigo; aca es el de la division del numerado con el denominador
        
        //pregunta y tirar una excepcion si el denominador es 0
        if (denominator == 0)

        throw 0; //si algo pasa devuelve este argumento, brinca al bloque de catch.


        //no se ejecuta si el denominador es 0
        divide= numerator/denominator; //si if no se cumple sigue aca

        cout<< numerator << " / " << denominator<< " = "<<divide<<endl;
    }

    catch (int num_exception){ //como manejarlo : imprime error

        cout<<"Error, no se puede dividir entre "<< num_exception <<endl;

        return 0;
    }
}

//RESULTADO 1
//Ingrese Numerador: 3
// Ingrese Denominador: 4
// 3 / 4 = 0.75
// 
// RESULTADO 2
// Ingrese Numerador: 3
// Ingrese Denominador: 0
// Error, no se puede dividir entre 0