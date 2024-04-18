//Laboratorio 4 B82870 Evelyn Feng 
#include "funciones.hpp"

//funciones

// https://codeshare.io/ie0217
// se copia y pega el codigo del profe



//ordena array con Bubble Sort
void bubbleSort(int arr[], int n) { // Itera a través de todos los elementos del array, excepto el último
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {  // Compara los elementos y realiza un intercambio si están en el orden incorrecto
                int temp = arr[j]; //variable temporal
                arr[j] = arr[j + 1];// Intercambia los elementos
                arr[j + 1] = temp;
            }
        }
    }
}

//ordena array con Selection Sort
void selectionSort(int arr[], int n) { //identifica menor y luego los va acomodando a la izquierda, reitera pasos
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i; // Se asume que el índice actual es el mínimo
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];//variable temporal para intercambiar valores
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

//ordena array con Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) { // Almacena temporalmente el valor del elemento actual
        int key = arr[i];
        int j = i - 1;

        // Desplaza los elementos mayores que la clave hacia adelante
        // para hacer espacio para insertar la clave en la posición correcta
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;// Inserta la clave en la posición correcta
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void generateRandomArray(int arr[], int n) { //pasa rederencia del ler elemento xq es un arreglo, se pasan el seco, no con punteros
    srand(time(0));
    for (int i=0; i<n; ++i) {
        arr[i]= rand() %1000;  //numeros entre 0 a 999
    }
}
//la semilla es la base bajo la cua uno genera numeros aleatorios



void measuringSortingTime(void(*sortingAlgorithm)(int[],int), int arr[], int n, string algorithmName){
//recibe parametro tipo void que se casteo como puntero de un algoritmo de orden. y recibe dos parametros un arreglo de enteros y un entero 
//recibe el puntero a una funcion

    high_resolution_clock::time_point start = high_resolution_clock::now(); 
    //tipo nombre de variable y funcion
    //toma tiempo, mada a ejecutar algoritmo de timepo y con stop dice donde estamos
    sortingAlgorithm(arr,n);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    //auto duration = duration_cast<microseconds> (stop-start); identifica automaticamente tipo de variable

    cout <<"Tiempo de "<< algorithmName << ": " << duration.count()<< " microsegundos"<< endl;

} 
