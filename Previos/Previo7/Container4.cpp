//Previo 7 Evelyn Feng Wu B82870
//Usa del map
#include <iostream>
#include <map> //define map
using namespace std;

int main(){
    map<int, string> student; //dato, valor y nombre

    //Usa el [] para agregar elementos

    student [1] = "Jackeline";
    student [2] = "Blake";

    //Usando insert() method to add elements, crea pareja
     student.insert(make_pair(3, "Denise"));
     student.insert(make_pair(4, "Blake"));
    //keys deben ser unicos
     //anadir elementos con keys duplicados = se reemplazan.

     student[5] = "Timothy";//no sale pues es reemplazado
     student[5] = "Aaron"; //le acae encima al anterior

     for (int i=1; i <= student.size();++i){
        cout<< "Student [" << i <<"]:"<< student[i]<< endl;
     }

    return 0;
}

//Resultado
//Student [1]:Jackeline
//Student [2]:Blake    
//Student [3]:Denise   
//Student [4]:Blake    
//Student [5]:Aaron