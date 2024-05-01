//Previo 8 Evelyn Feng Wu B82870
//class template ejemplo 1
#include<iostream>
using namespace std;

template<class T>//palabras reservadas

class Number{ //clase que no importa tipo de dato
    private:
    //Variable de tipo T
    T num;

    public://T recibe argumento tipo n y lo asigna sobre num
    Number(T n) : num (n) {}//constructor, modifica el tipo de dato T, mismo nombre de la clase

    T getNum(){ //metodo o especificacion pulico uqe retorna la variable privada
        return num;
    }
};

int main (){
    //crear objeto con objeto de tipo int

    Number<int> numberInt(7); //nombre de clase y dentro el nmbre del tipo de dato, instanca con nomber int y constructor recibe 7

    //crear objeto con objeto de tipo Double

    Number <double> numberDouble(7.7);

    cout <<"Int number = " << numberInt.getNum()<<endl;
    cout << "double Number = " << numberDouble.getNum()<<endl;

    return 0;
}

//RESULTADO
//Int number = 7
//double Number = 7.7