//Laboratorio 4 B82870 Evelyn Feng 

#include "funciones.hpp"



int main(){
    const int SIZE =10000; //define constante
    int arr[SIZE]; //parentesis cuadrados porque es el tamano

    generateRandomArray(arr, SIZE); 
    //se agrega esto para que sean diferentes, con cada ejecucion pueden dar valores distintos
    //envia punteros a funciones
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");
    generateRandomArray(arr, SIZE); 
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort") ;
    generateRandomArray(arr, SIZE); 
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort") ;
    generateRandomArray(arr, SIZE); 
    measuringQuickSortingTime(quickSort, arr, 0, SIZE - 1, "Quick Sort");

    //aca llama funcion, manda puntero, size y string
    //lo hace de manera generica para no poner BubbleSort(arr[]...)

    return 0;

}


