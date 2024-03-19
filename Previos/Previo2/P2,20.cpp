//Previo 2 B82870 PPT
#include <iostream>
using namespace std;

// Definición de la estructura Person para almacenar información de una persona
struct Person {
    char name[50]; // Nombre 
    int age;       // Edad 
    float salary;  // Salario 
};

int main() {
    Person p1; // Declaración de una variable de tipo Person llamada p1

    // Solicitar al usuario que ingrese el nombre completo
    cout << "Ingrese el nombre completo: ";
    cin.get(p1.name, 50); // Leer el nombre y almacena en p1.name

    // Solicitar al usuario que ingrese la edad
    cout << "Ingrese la edad: ";
    cin >> p1.age; // Leery almacenar en p1.age

    // Solicitar al usuario que ingrese el salario
    cout << "Ingrese el salario: ";
    cin >> p1.salary; // Leer y almacenarlo en p1.salary

    // Muestra la información de la persona ingresada por el usuario
    cout << "\nMostrando Información:" << endl;
    cout << "Nombre: " << p1.name << endl;
    cout << "Edad: " << p1.age << endl;
    cout << "Salario: " << p1.salary << endl;

    return 0; 
}

//RESULTADO
//Ingrese el nombre completo: Estrella Hernandez
//Ingrese la edad: 20
//Ingrese el salario: 350000
//
//Mostrando Información:
//Nombre: Estrella Hernandez
//Edad: 20
//Salario: 350000
