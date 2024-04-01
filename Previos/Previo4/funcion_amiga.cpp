//Previo 4 B82870 Evelyn F

#include <iostream>
using namespace std;

class Distance {
private:
    int meter;

    // friend function definidas en la clase
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};


int addFive(Distance d) {
    // Accessing private member meter of Distance class
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D);// a traves de funcion amiga pasa objeto y puede acceder a atributo privado
    return 0;
}
