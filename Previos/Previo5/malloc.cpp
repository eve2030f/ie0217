//PREVIO 5 B82870 EVELYN F.
#include <iostream>
using namespace std;

int main() {
    // asignar memoria de tamaño int a un puntero int
    //notese el uso de Malloc devuelve void pointer
    //convierte en entero puntero
    //recibe el tamano de bytes a resercar en entero
    int* ptr = (int*) malloc (5*sizeof(int));
    
    // asignar el valor 5 a la memoria asignada
    *ptr = 5;
    
    cout << *ptr;

    // liberar la memoria asignada malloc
    delete ptr;

    return 0;
}
