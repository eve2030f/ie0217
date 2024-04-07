//PREVIO 5 B82870 EVELYN F.
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int *ptr; //entero puntero
    ptr = (int *)calloc(5, sizeof(int)); //recibe elementos a asignar 5 y de tamano entero
    //da void pointer o null

//si falla
    if (!ptr) {
        cout << "Memory Allocation Failed" << endl;
        exit(1);
    }
// de lo contrario
    cout << "Initializing values..." << endl << endl;
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2 + 1; //indice y es un valor especifico utilizado
    }
// inicializa valores
    cout << "Initialized values" << endl;
    for (int i = 0; i < 5; i++) {
        /* ptr[i] andy *(ptr+i) can be used interchangeably */
        //imprime punteros
        cout << *(ptr + i) << endl;
    }

    free(ptr); //libera memoria calloc
    return 0;
}
