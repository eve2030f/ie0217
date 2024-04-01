//Previo 4 B82870 Evelyn F

#include <iostream> 
using namespace std;

class Animal { 
    public:
        void eat() { //metodo 1
        cout << "I can eat!" << endl;
    }



        void sleep() { //metodo 2
        cout << "I can sleep!" << endl;
    }
};

class Dog: public Animal {
    public:
        void bark() {  //metodo 3
        cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    Dog dog1; //llama 3 metodos
    // Calling members of the base class 
    dog1.eat();
    dog1.sleep();
    // Calling member of the derived class 
    dog1.bark();

    return 0;
}