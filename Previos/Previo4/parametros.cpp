//Previo 4 B82870 Evelyn F
#include <iostream>
using namespace std;

class Student {

    public:

        double marks; 

        Student(double m){
            marks = m; //asigna lo q le pasan a m en el constructor
        }
};

//parametros a funciones
void calculateAverage(Student s1, Student s2) { 
    
    double average = (s1.marks + s2.marks) / 2; // puede acceder xq var publicas
    
    cout << "Average Marks = " << average << endl;
}

int main() {

    Student student1(88.0), student2(56.0); //nombre de clase y dos instaciaciones de obj
    
    calculateAverage(student1, student2); //pasa objetos
    
    return 0;
}
//obtiene el promedio de las notas.