//Laboratorio 4 B82870 Evelyn Feng 

// SI LLEGA Y NO ENCUENTRA EL DOC SE BRINCA EL DEF
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <string>

//5 funciones para ordenar arreglo
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

//genera random array
void generateRandomArray(int arr[], int n);
//mide el tiempo
void measuringSortingTime(void(*sortingAlgorithm)(int[], int), int arr[], int n, std::string algorithmName);

#endif 
