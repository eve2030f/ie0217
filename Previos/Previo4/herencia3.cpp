//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Mammal {
public:
    Mammal() { //herencia multiple, pueden ser dos clases separadas.
        cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        cout << "Winged animal can flap." << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {}; //hereda de ambas clases

int main() {
    Bat b1;
    return 0;
}
