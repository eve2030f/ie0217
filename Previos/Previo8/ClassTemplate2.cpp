//Previo 8 Evelyn Feng Wu B82870
//CLASS TEMPLATE EJERCICIO2  definicion de funcion fuera de la clase
#include <iostream>
using namespace std;

//Class template con parametros multiples y parametros default

template <class T, class U, class V = char> //3 tipos de datos distintos, v clasificado como tipo char si no lo define
class ClassTemplate {

    private:
    T var1; //multiples parametros pueden ser genericos
    U var2;
    V var3;

    public:
    ClassTemplate(T v1, U v2, V v3): var1(v1), var2(v2), var3(v3){} //clase que recibe 3 parametros

        void printVar(){ //metodo publico que imprime variables
            cout<<"var1 = "<< var1 <<endl;
            cout<<"var2 = "<< var2 <<endl;
            cout<<"var3 = "<< var3 <<endl;
        }
    };

int main(){
    //creando objeto con int, double y char types.

    ClassTemplate<int,double> obj1(7,7.7,'c'); //usa classs template y pas T y U , V usa por defecto char por eso el tercer argumento es c.
    cout<<"Valores de obj1 = "<< endl;
    obj1.printVar();

    //creando objeto con int, double y bool types
    ClassTemplate<double,char,bool> obj2(8.8,'a',false); //aca V si es bool
    cout<<"\nValores de obj2 = "<< endl;
    obj2.printVar();

    return 0;


}

//RESULTADO
//Valores de obj1 = 
//var1 = 7
//var2 = 7.7
//var3 = c
//
//Valores de obj2 =
//var1 = 8.8
//var2 = a
//var3 = 0