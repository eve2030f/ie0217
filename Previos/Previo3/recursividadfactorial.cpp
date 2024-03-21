//Previo 3 B82870 Eveyn F.

// Factorial of n = 1*2*3*...*n  

#include <iostream> 
using namespace std; 

int factorial(int); // Declaración de la función factorial

int main() {
    int n, result; 

    cout << "Enter a non-negative number: "; // Pide datos al usuario 
    cin >> n;

    result = factorial(n); // Calcula el factorial del número ingresado

    cout << "Factorial of " << n << " = " << result; // Imprime el resultado

    return 0; // Enter a non-negative number: 2 ---  Factorial of 2 = 2
}

int factorial(int n) // Definición de la función factorial
{
    if (n > 1) // Si el número es mayor que 1
    {
        return n * factorial(n - 1); // Retorna el producto del número y el factorial del número reducido en 1
    }
    else // Si el número es 1 o menos
    {
        return 1; // Retorna 1 (el factorial de 0 y 1 es 1)
    }
}