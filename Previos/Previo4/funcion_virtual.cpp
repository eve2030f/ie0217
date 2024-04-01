//Previo 4 B82870 Evelyn F
//funcion virtual se redefine en la base
#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl; //sobreescribe aca
        }
};

int main() {
    Derived derived1; //nombre del objeto
    // pointer of Base type that points to derived1 
    Base* base1 = &derived1;

    // calls member function of Derived class 
    base1->print(); //imprime metodo de la func derivada
    return 0;
}
