//Previo 4 B82870 Evelyn F

#include <iostream> 
using namespace std;

class Fraccion {
    int numerador, denominador; 
    public:
        Fraccion(int n, int d) : numerador(n), denominador(d) {} //cada vez q instancia debe pasar numerador y denominador

        Fraccion operator+ (const Fraccion &f) { //explica qeu es suma de tipo fraccion
            Fraccion resultado( //resultado objeto tipo fraccion
                numerador * f.denominador + f.numerador * denominador, 
                denominador * f.denominador //coma para separar denominador.
                );
                return resultado; // de tipo fraccion
            }

        void imprimir() { //invoca metodo
            cout << numerador << "/" << denominador << endl; 
        }
};

int main() {
    Fraccion f1(1, 2); 
    Fraccion f2(3, 4); 

    Fraccion f3 = f1 + f2; 

    f3.imprimir(); 
    
    return 0;
}
