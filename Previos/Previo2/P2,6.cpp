//Previo 2 B82870 PPT


#include <iostream> 
using namespace std;
// DE ACUERDO AL NUMERO INGRESADO SE INDICA SI ES POSITIVO, NEGATIVO O NINGUNO EN CASO DE QUE SEA 0.
int main() { 

    int num;

    cout << "Enter an integer: " ;
    cin >>num ;
    // outer if condition 
    if (num !=0) { 
        // inner if condition 
        if (num > 0) {  //MAYOR A 0 POSITIVO
        cout << "The number is positive." << endl; 
        } 
        // inner else condition 
        else {  // MENOR A 0 NEGATIVO
        cout << "The number is negative." << endl; 
        } 
}
// outer else condition 
else {  //SI ES 0 NI + NI -
    cout << "The number is 0 and it is neither positive nor negative. " << endl; 
} 
    cout << "This line is always printed. " << endl; 
    return 0;
} 

//RESULTADO
//Enter an integer: 2
//The number is positive.
//This line is always printed. 

//Enter an integer: 2
//he number is positive.
//his line is always printed. 