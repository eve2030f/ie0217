
//Previo 6 Evelyn Feng Wu B82870
//Selection sort, identifica menor y luego los va acomodando a la izquierda, reitera pasos. 
//puede quedar desordenado después del primer step
#include <iostream>
using namespace std;

//se declara la funcion para intercambiar la POSICION de dos elementos

void swap(int*a,int*b){
    int temp=*a; //variable temporal a y b, primero se asigna a temporal a, luego le cae encima con b y de nuevo a temporal.
    *a=*b;
    *b=temp;
}

//funcion para imprimir un array
//se utilizan punteros, ya que se esta hablando de posiciones
void Imprimir (int array[], int size){
    for (int i=0; i < size; i++){
        cout<< array[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int array[],int size){
    for (int paso = 0; paso < size -1; paso++){ //itera del tamaño 0 al array-1
        int min_idx = paso; //indice menor es donde comienza paso
        for (int i =paso+1; i<size;i++){ //siempre comienza en el indice+1
            //En este loop, se elecciona el elemento minimo. De manera similar a ambos codigos anteriores, se esta
            //ordenando de modo ASCENDENTE. Si se quiere DESCENDENTE, se debe cambiar el '>' a '<' en la linea 25.
            if (array [i]<array[min_idx])
            min_idx=i; //si se cumple entonces se actualiza
        }
    //poniendo el numero minimo en la posicion correcta. cambia path.
    swap(&array[min_idx], &array[paso]);
    }
}

//ahora, en el main

int main(){
    int datos[]= {20, 12, 10, 15, -2};
    int size = sizeof(datos)/sizeof(datos[0]);
    SelectionSort(datos,size);
    cout<< "Arraglo ordenado en orden ASCENDENTE: \n";
    Imprimir(datos,size);
}

//Arraglo ordenado en orden ASCENDENTE: 
//-2 10 12 15 20  