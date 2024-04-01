//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Student {
    public:
    double marks1, marks2; //retorna objetos, estos son 2 atributos
};

Student createStudent() { //crea tipo de objeto y retorna objeto recargado con valores. Sustituye constructor
    Student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1: " << student.marks1 << endl;
    cout << "Marks 2: " << student.marks2 << endl;

    return student;
};

int main() {
    Student student1;

    student1.createStudent();
    
    return 0;
};
