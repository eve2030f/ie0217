//Previo 2 B82870 PPT
#include <iostream> 
    using namespace std; 
    // Utilizando g como variable global, se declara fuera del main
    int g; 
    int main ( ) { 
    // Variables locales
    int a, b; 
    // initialization 
    a =10;
    b=20;
    g=a+b; //declarada de forma global. Es la variable del sumador
    cout <<g; // igual da 30
    return 0;
} 