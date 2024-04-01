//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Animal {
public:
    void info() { cout << "I am an animal." << endl; }
};

class Dog : public Animal { //ambas herencias son de animal, heredan del mismo
public:
    void bark() { cout << "I am a Dog. Woof woof." << endl; }
};

class Cat : public Animal { //ambas herencias son de animal, heredan del mismo son moldes que no se gasta
public:
    void meow() { cout << "I am a Cat. Meow." << endl; }
};

int main() {
    // Crear objeto de la clase Dog
    Dog dog1;
    cout << "Dog Class: " << endl;
    dog1.info(); // Función de la clase padre
    dog1.bark();

    // Crear objeto de la clase Cat
    Cat cat1;
    cout << "\nCat Class: " << endl;
    cat1.info(); // Función de la clase padre
    cat1.meow();

    return 0;
}
