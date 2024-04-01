//Previo 4 B82870 Evelyn F
#include <iostream>
#include <string>
using namespace std;

class Animal {
private: //son privados si no se indica, por defecto
    string color; //atributo privado
protected:
    string type;//atributo protegido
public: //atributo publico
    void run() { cout << "I can run BASE!" << endl; }
    void eat() { cout << "I can eat!" << endl; }
    void sleep() { cout << "I can sleep!" << endl; }
    void setColor(string clr) { color = clr; }
    string getColor() { return color; }
};

class Dog : public Animal { //clase derivada que hereda de Animal.
public:
    void run() { cout << "I can run -- DERIVED!" << endl; }
    void setType(string tp) { type = tp; } //paticular de clase perro pero si se puede usar xq es protegido
    void displayInfo(string c) { //solo esta en la clase perro
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl; //c es algo qeu se utiliza para imprimir con perro1
    }
    void bark() { cout << "I can bark! Woof woof!!" << endl; }
};

int main() {
    Dog dog1;
    dog1.run(); //primero se fija en la clase 1 si se sobreescribio, entonces sale lo de clase perro
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor()); // string tipo c del color, retorna el color de clase animal
    return 0;
}
