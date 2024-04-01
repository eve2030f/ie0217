//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;
class ClassB;
class ClassA { 
    private: 
        int numA;

        // friend class declaration, clase B es a clase amiga que puede tener acceso a numA
        friend class ClassB;//solo puede acceder a NumA con esta clase
    public:
        // constructor to initialize numA to 12 
        ClassA(): numA (12) {}
};        
class ClassB {
    private:
        int numB;
    public:
        // constructor to initialize numB to 1 
        ClassB(): numB(1) {}
        // member function to add numA
        // from ClassA and numB from ClassB 
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
    }
};
int main() {
        ClassB objectB;
        cout << "Sum: " << objectB.add();
        return 0;
}