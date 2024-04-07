//PREVIO 5 B82870 EVELYN F.
#include <iostream>
using namespace std;

class Student { //clase estudiante
private:
    int age; //atributo privado

public:
    // El cnstructor que inicializa 12
    Student(): age(12) {}

    void getAge() {
        cout << "Edad: " << age << endl; //accede a edad porque dentro de clase
    }
};

int main() {
    // Declarar dinámicamente un objeto Student
    Student* ptr = new Student(); //devuelve direccion de memoria donde comienza

    // Llamar a la función getAge()
    ptr->getAge(); //imprime dato del puntero llamado

    // Liberar la memoria asignada a ptr
    delete ptr;

    return 0;
}
//RESULTADO
//Edad: 12