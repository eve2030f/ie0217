//PREVIO 5 B82870 EVELYN F.
#include<iostream>

//Se almacena en el segmento de DATA.
int globalVariable= 42;

int main(){
//Se almacena en el STACK
    int stackVariable= 10;

    //Devuelve espacio para almacenar variable en el HEAP

    int* heapVariable= new int(20);

    std::cout<<"Valor de globalVariable: "<< globalVariable<<std::endl;
    std::cout<<"Valor de stackVariable: "<< stackVariable<<std::endl;
    std::cout<<"Valor de heapVariable: "<< heapVariable<<std::endl;
    
    //Liberar espaco en la memoria del HEAP
    delete heapVariable; 

    return 0;
}
//RESULTADO
//Valor de globalVariable: 42
//Valor de stackVariable: 10
//Valor de heapVariable: 0x1d25bf72000