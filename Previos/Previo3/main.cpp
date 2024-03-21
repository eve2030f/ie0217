//Previo 3 B82870
//Funcion para sumar dos numeros
//Este es el main que llama a los otros dos documentos para ejecutar la fucnion

#include <iostream> //primero incluimos la libreria
#include "sum.hpp" //llama la definicion es equivalente a copiar y pegar el codigo de sum.hpp
using namespace std;

int main(){
    int num1 = 9;
    int num2 = 3;
    int result = sum(num1,num2);

cout << "El resultado de " << num1 << " + " << num2 << " es igual a: " << result<< endl;

    return 0;
}

//Resultado: El resultado de 9 + 3 es igual a: 12

//RESULTADO 1:  EJECUTANDO ./sum.exe
//El resultado de 5+3es igual a:8
//RESULTADO 2:  EJECUTANDO ./sum.exe y cambiando mun 1 como 9
//El resultado de 9 + 3 es igual a: 12

