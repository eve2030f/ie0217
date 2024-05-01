//Previo 8 Evelyn Feng Wu B82870
//Multiexcepciones

#include <iostream>
using namespace std;

int main (){
  
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0}; //3 variables:numerador, denominador y un arreglo con 4 elementos
    int index; //indice

    cout<<"Enter array index: "; //coloque un indice del arreglo [0,1,2,3]
    cin >> index;

    try {
    // throw exception if array out of bounds 
    if (index >= 4) 
    throw "Error: Array out of bounds!"; //si indice mayor a 4, sale error entra a catch

    // not executed if array is out of bounds 
    cout<<"Enter numerator: ";
    cin >> numerator;
    

    cout<<"Enter denominator: ";
    cin >> denominator;
    

    // throw exception if denominator is 
    if (denominator == 0) 
        throw 0; // entra al segundo catch

    // not executed if denominator is 0 
    arr[index] = numerator / denominator; 
    cout << arr[index] << endl;
    }


    // catch "Array out of bounds" exception 
    catch (const char* msg) {  //como el throw tiene string entra a un const char
        cout << msg << endl;
    }

    // catch "Divide by 0" exception 
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }
    
    // catch any other exception 
    catch (...) {
        cout << "Unexpected exception! " << endl; // si no activa throw del index y el del denom =0
    }

    return 0;
}

//RESULTADO 1
//Enter array index: 6
//Error: Array out of bounds!
//
//RESULTADO 2
//Enter array index: 2
//Enter numerator: 65
//Enter denominator: 0
//Error: Cannot divide by 0
//
//RESULTADO 3
//Enter array index: 1
//Enter numerator: 25
//Enter denominator: 10
//2.5