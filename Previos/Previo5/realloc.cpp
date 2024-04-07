//PREVIO 5 B82870 EVELYN F.
#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    float *ptr, *new_ptr; //para realloc se debe definir primero
    ptr= (float*) malloc (5*sizeof(float));//devuelve void pointer
   //convierte en entero puntero
   //si falla:
    if(ptr == NULL){
        cout<<"Memory Allocation failed";
        exit(1);
    }

    //Initializing memory block
    for(int i=0; i<5; i++){//inicializa cada bloque de memoria
        ptr[i]= i*1.5;
    }
    //Reallocating memory
    //reasignacion de memoria
    new_ptr=(float*) realloc(ptr,10*sizeof(float)); //original y nueva asignacion
    if (new_ptr== NULL){// si es null se sale
        cout<<"Memory Re-allocation Failed";
        exit(1);
    }

    //Initializing re-allocated memory block

    for (int i=5; i<10;i++){ // imprime valores de 0 a 10
        new_ptr[i]= i*2.5;//cada indice por 2.5
    }
    cout<<"Printing Values" << endl;

    for (int i=0; i<10;i++){ // imprime valores de 0 a 10
        cout<< new_ptr[i]<< endl;
    }

    free(new_ptr); //libera new pointer

    return 0;

}
