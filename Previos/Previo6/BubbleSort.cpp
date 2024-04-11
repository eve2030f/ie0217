
//Previo 6 Evelyn Feng Wu B82870
//Sort de tipo Bubble como se vio en clase
#include <iostream>
using namespace std;


void BubbleSort (int array[],int size){

//loop para accesar cada elemento del array
//itera pasos
    for (int paso = 0; paso < size; ++paso){
        //otro loop para comparar los elementos dentro del array, note que el primero es para ACCESAR los elementos, no se hace nada con ellos.
        for(int i = 0; i < size - paso -1; ++i){
            //se copmaran dos elementos adyacentes dentro del array
            
            if (array[i] > array [i+1]){
                //cambia los elementos al orden deseado
                 int temp = array [i];
                 array[i] = array[i+1];
                 array[i+1] = temp;
            }
        }
    }

}
//Para imprimir el array
void Imprimir(int array[], int size){
    for (int i= 0; i < size; ++i){
        cout<<" "<<array[i];
    }
    cout << "\n";
}


int main() {
int datos []= {-9 -2 0 11 45};
//Para encontrar el tamano del array

int size = sizeof(datos)/ sizeof(datos[0]);

BubbleSort(datos,size);

cout << "Array Ordenado de Manera Ascendente: \n";

Imprimir(datos,size);

}

//RESULTADO
//Array Ordenado de Manera Ascendente: 
// -9 -2 0 11 45