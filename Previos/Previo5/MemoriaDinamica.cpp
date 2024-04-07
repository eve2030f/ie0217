//PREVIO 5 B82870 EVELYN F.
#include<iostream>
using namespace std;

int main(){
    int num; //define eint qeu es numero
    cout << "Enter total number of students: ";// ingrese total de estudiantes segun usuario
    cin >> num; 
    float*ptr;


    ptr = new float[num]; //asigna con flotante un arerglo con memoria dinamica
//direccion del primer puntero
    cout<< "Enter GPA of students. " << endl; //ingresa datos
    for (int i=0; i <num;++i){
        cout << "Student" << i+1 <<": "; 
        cin >> *(ptr+i); //donde inicia el siguiente flotante
    }
//imprime 
    cout<<"\nDisplaying GPA of students"<<endl;
    for (int i=0; i < num; ++i){
        cout<< "Student"<< i+1 << ": "<< *(ptr+i)<<endl;
    }

    //liberar memoria del puntero
 
delete[] ptr; //libera memoria commpleta del arreglo.

return 0;
}
//RESULTADO
//Enter GPA of students. 
//Student1: 3.6
//Student2: 3.1
//Student3: 3.9
//Student4: 2
//
//Displaying GPA of students
//Student1: 3.6
//Student2: 3.1
//Student3: 3.9
//Student4: 2