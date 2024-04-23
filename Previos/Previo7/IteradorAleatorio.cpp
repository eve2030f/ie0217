//Previo 7 Evelyn Feng Wu B82870
//iterador aleatorio, permite hace lo de os forward, bidireccionales y mas
#include<iostream>
#include <vector>
using namespace std;

int main () {
    //crear un vector

    vector <int> vec{1,2,3,4};


    //crear iteradores que apuntan al primer y el ultimo elemento


    vector <int>::iterator itr_first= vec.begin();
    vector<int>::iterator itr_last= vec.end()-1; //-1 xq end apunta a ultimo mas 1

    // mostrar los elementos del vector
    cout <<"First Element: "<< *itr_first <<endl; //accede
    cout<< "Second Element: "<< itr_first[1]<<endl; //accede al primer elemento

    cout<<"Second Last Element: " <<*(itr_last - 1)<<endl;
    cout<< "Last Element: "<< *(itr_last) <<endl; //accede al ultimo, dato puntero

    return 0;
}
//Resultado
//First Element: 1
//Second Element: 2
//Second Last Element: 3
//Last Element: 4