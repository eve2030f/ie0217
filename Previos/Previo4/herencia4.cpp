//Previo 4 B82870 Evelyn F
#include <iostream> 
using namespace std;

class A {
public:
    void display() { //metodod desplegar que imprime base
        cout << "Base class content." << endl;
    }
};

class B : public A {}; //herencia multinivel pues hereda de a

class C : public B {}; //hereda de b

int main() {
    C obj;
    obj.display();
    return 0;
}
