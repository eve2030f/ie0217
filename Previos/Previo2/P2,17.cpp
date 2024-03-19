//Previo 2 B82870 PPT
#include <iostream> 

using namespace std; 

void test() 
{
    // var retiene su valor entre llamadas a la función
    static int var = 0; // Inicializamos var como 0 
    ++var; // Incrementamos el valor de var en 1

    cout << var << endl; // valor de var seguido de un salto de línea
}

int main() 
{
    test(); // Llamamos a la función test, incrementando var a 1 
    test(); // Llamamos nuevamente, incrementando var a 2 
    
    return 0; // finaliza correctamente y devuleve 1 y 2, el valor incrementado en 1 y el que le sigue
}
