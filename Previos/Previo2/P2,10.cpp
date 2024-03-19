//Previo 2 B82870 PPT
// IMPRIME NUMEROS DEL 1 AL 5 
#include <iostream> 
using namespace std; 
int main() { 
    int i =1;
    // WHILE DE i a 5 
    do { 
        cout << i << "  " ;
        ++i; //importante ponerlo porque es donde para la ejecucion al ir sumando, sino le imprime muchos unos
    }
    while (i <= 5); // i menor a 5 retorna 0
    return 0; 

}
