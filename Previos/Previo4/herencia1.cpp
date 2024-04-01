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
    Derived derived1; //queda por defecto el ultimo print
    derived1.print();
    return 0;
}
