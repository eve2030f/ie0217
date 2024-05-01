//Previo 8 Evelyn Feng Wu B82870
//Excepciones: ejemplo 2 con cambio en el denominador para mostrar una salida infinito
#include <iostream>
using namespace std;

int main (){
    double numerator,denominator,divide; //define 3 variables tipo double

    cout<< "Ingrese Numerador: " ;
    cin>> numerator; 

    cout<< "Ingrese Denominador: ";
    cin>> denominator;

    try{ 
        
        if (denominator == 5)

        throw 5; 
        //si no es 5
        divide= numerator/denominator; 

        cout<< numerator << " / " << denominator<< " = "<<divide<<endl;
    }

    catch (int num_exception){ 

        cout<<"Error, no se puede dividir entre "<< num_exception <<endl;

        return 0;
    }
}

//RESULTADO 1
//Ingrese Numerador: 30
//Ingrese Denominador: 0
//30 / 0 = inf