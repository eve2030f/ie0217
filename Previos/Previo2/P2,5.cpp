//Previo 2 B82870 PPT

#include <iostream>  // Incluimos la biblioteca para poder usar cin y cout
//#include <string>  // Si necesita usar la clase string 
using namespace std;

int main() { 
    char oper;  // Variable para almacenar el operador ingresado 
    float num1 , num2;  // Variables para almacenar los números 
    
    // Solicitamos al usuario que ingrese un operador
    cout << "Enter an operator (+, -,*, / ): "; 
    cin >> oper;  
    
    // Solicitamos al usuario que ingrese dos números
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;  
    
    // Evaluamos el operador ingresado por el usuario y realizamos la operación 
    switch (oper) { 
        case '+' :
            cout << num1 << " + " << num2 << " = " << num1 + num2;  // Suma
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;  // Resta
            break; 
        case  '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;  // Multiplicación
            break; 
        case '/':
            if(num2 == 0){
                cout << "Error! Division by zero is not allowed." ;  // Verifica división por cero
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2;  // División
            }
            break; 
        default: 
            // Si el operador no coincide con ninguno de los casos anteriores
            cout << "Error! The operator is not correct" ; 
            break;
    }
    
    return 0;  // Indicamos que el programa finaliza correctamente
}

//RESULTADO
//Enter an operator (+, -,*, / ): +
//Enter two numbers: 
//1 2
//1 + 2 = 3