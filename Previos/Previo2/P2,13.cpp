//Previo 2 B82870 PPT

#include <iostream> 
using namespace std; 
// DECLARA FUNCION DE SIMA
int add(int a, int b) { 
    return (a + b); 
}   
int main() { 
    int sum; 
    // LLAMA A LA FUNCION Y LA USA PARA ALMACENAR
    // DEVUELVE LA SUMA DE 100 Y 78
    sum = add(100, 78); 
    cout << "100 + 78 =  " << sum << endl;
    return 0; 
}


//RESULTADO
//
//100 + 78 =  178
