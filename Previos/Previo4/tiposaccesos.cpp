#include <iostream>
using namespace std;

class Animal {
    //clase 
//tpo de accesos de clase
    public:
        void setEdad(int age) {
            edad = age;
        }
        int getEdad(){
            return edad;
        }

    protected:
        string nombre;

    private:
        int edad;
};
//clase derivada
class Perro : public Animal {
    public:
        void setNombre(string n) {
            nombre = n;
        }
        string getNombre() {
            return nombre; //se puede acceder xq es protegido.
        }
};


//esto es fuera de la clase
int main() {
    Perro miPerro; //instancia objeto de clase de perro, no puede usar acc protegidos o privados
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " años." <<endl;

    return 0;
}