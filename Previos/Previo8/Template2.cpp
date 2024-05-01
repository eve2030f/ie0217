//Previo 8 Evelyn Feng Wu B82870
//ejercicio 1 de templates modificado
#include <iostream>
using namespace std;
template<typename T> //creando o definiendo un template con argumento T
T add (T num1, T num2){
    return (num1+num2); //funcion creada de add int
}
int main() {
    int result1;
    double result2;
    // llama con parametros int 
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl; //aca la salida se modifica
    // llama con parametros double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl; //aca la salida se modifica
    return 0;
}

//RESULTADO
//2 + 3 = 5
//2.2 + 3.3 = 5.5