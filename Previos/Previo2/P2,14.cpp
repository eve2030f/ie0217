//Previo 2 B82870 PPT
// FUNCION PROTOTIPO ANTES DEL main() 
#include <iostream> 
using namespace std; 
// USANDO FUCNION PROTOTIPO
int add(int, int);

int main() { 
    int sum; 
    // LLAMA A LA FUNCION Y LA USA PARA ALMACENAR
    // DEVUELVE LA SUMA DE 100 Y 78 
    sum = add(100, 78);
    cout << "100 + 78 =  " << sum << endl;
    return 0;
}

// SE DEFINE LA FUNCION DESPUES DEL MAIN
int add(int a, int b) { 
return (a + b); 
}
//RESULTADO
//
//100 + 78 =  178
