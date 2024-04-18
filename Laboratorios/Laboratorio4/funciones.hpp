//Laboratorio 4 B82870 Evelyn Feng 

#ifndef FUNCIONES_HPP// SI LLEGA Y NO ENCUENTRA EL DOC SE BRINCA EL DEF
#define FUNCIONES_HPP 

#include "xxxxxxxx.hpp"


//5 funciones para ordenar arreglo

void bubbleSort(int arr[], int n);

void selectionSort(int arr[], int n);

void insertionSort(int arr[], int n);

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

//genera random array
void generateRandomArray(int arr[], int n);
//mide el tiempo
void measuringSortingTime(void(*sortingAlgorithm)(int[],int), int arr[], int n, string algorithmName);

#endif
