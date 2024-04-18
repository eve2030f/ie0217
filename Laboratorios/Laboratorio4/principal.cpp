//Laboratorio 4 B82870 Evelyn Feng 

#include "funciones.hpp"

int main(){
    const int SIZE =10000; //define constante
    int arr[SIZE]; //parentesis cuadrados porque es el tamano

    generateRandomArray(arr, SIZE);

    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort") ;
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort") ;
    
    //aca llama funcion, madna puntero, sizq y string
    //lo hace de manera generica para no poner BubbleSort(arr[]...)

    return 0;

}


