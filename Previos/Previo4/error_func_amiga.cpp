//Previo 4 B82870 Evelyn F
//este codgio es solo de demostracion del error
#include <iostream>
using namespace std;

class MyClass { 
    private:
        int member1; //funciones y clases amigas que permiten acceso a miembros privados
}

int main() {
    MyClass obj;
    
    // Error! Cannot access private members from here.
    //error pues no puede acceder a un miembro privado
    obj.member1 = 5;
}