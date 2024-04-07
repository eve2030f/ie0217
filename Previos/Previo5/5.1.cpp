//PREVIO 5 B82870 EVELYN F.
#include <iostream>
using namespace std;

int main() {
    // declara un puntero int
    int* pointInt;
    // declara un puntero float
    float* pointFloat;
    
    // asigna memoria dinámicamente
    pointInt = new int;
    pointFloat = new float;
    
    // asigna valor a la memoria en heap
    *pointInt = 45;
    *pointFloat = 45.45f;
    
    // imprime los valores
    cout << *pointInt << endl;
    cout << *pointFloat << endl;
    
    // libera memoria
    delete pointInt;
    delete pointFloat;
    
    return 0;
}
//RESULTADO
//45
//45.45