//Previo 2 B82870 PPT

#include <iostream> 
using namespace std;
// display a number 
void displayNum(int n1, float n2) { 
cout << "The int number is " << n1 ; //indica el entero
cout << " The double number is " << n2; //indica el flotante
}
int main() {
int num1 =5; 
double num2 = 5.5; 
// calling the function 
displayNum(num1, num2) ; //llama funcion
return 0; 
}