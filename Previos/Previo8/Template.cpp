//Previo 8 Evelyn Feng Wu B82870
//utilizando templates ejercicio 1

#include<iostream>
using namespace std;

template<typename T> //creando o definiendo un template con argumento T
T add (T num1, T num2){
    return (num1+num2); //funcion creada de add int
}

int main (){
    int result1;
    double result2;
    //llamando los parametros int, realiza la suma
    result1= add<int>(2,3);//tipo de dato para la funcion: int
    cout<< result1<< endl;

    //llamando con parametros double, se realiza la suma con doubles
    result2= add <double> (2.2,3.3); //tipo de dato para la funcion: double
    cout<<result2<< endl;

    return 0;
}

//RESULTADO
//5
//5.5