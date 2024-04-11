
//Previo 6 Evelyn Feng Wu B82870
// Insertion Sort toma cada elemento del arreglo y lo inserta en su posición correcta 
#include <iostream>
using namespace std;

//funcion para imprimir un array

void Imprimir (int array[], int size){
    for(int i=0; i < size ; i++){
        cout << array[i] << " ";
    }
    cout<<endl;
}


void insertionSort (int array [], int size){
    for (int paso =1; paso < size; paso++){
        int key = array[paso];
        int j= paso - 1;
        //En este caso, se compara la key en la izquierda del array
        // hasta que aparezca un elemento mas pequenp.
        //Nuevamente, en orden ascendente.
        while (key < array[j] && j >= 0){ //itera dos codiciones, tiene que ser mayor a key, j no puede ser cero pues es el step -1
            array[j+1] = array[j];
            --j; //de ese punto hacia atras, cumple fucnion y actualiza
        }
        array[j+1]=key; //actualiza array con valor de key
    }
}
//La funcion que corre todo

int main(){
    int datos[]={9,5,2,1,46};
    int size= sizeof(datos)/sizeof(datos[0]);
    insertionSort(datos,size);
    cout<< "Array ordenado en orden Ascendente: \n";
    Imprimir(datos, size);
}

//Array ordenado en orden Ascendente: 
//1 2 5 9 46