//Previo 4 B82870 Evelyn F
#include <iostream> 
using namespace std;

class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1, derived2;
    derived1.print(); // imprime el ultimo por defecto
    // Accede a la función print() de la clase Base
    derived2.Base::print(); //print hace referencia a la clase base, sintaxis de 4 puntitos.
    return 0;
}
