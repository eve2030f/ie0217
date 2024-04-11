
//Previo 6 Evelyn Feng Wu B82870
//Sort de tipo Bubble como se vio en clase
#include <iostream>
using namespace std;

//pasa arreglo y se modifica a referencia
void BubbleSort (int array[],int size){

//loop para accesar cada elemento del array, no hacce nada con ellos
//itera sobre pasos
    for (int paso = 0; paso < (size-1); ++paso){ //paso del 0 al arreglo, sin swap que se detenga
        
        //se crea variable aca para identificar que si cambio
        int cambio = 0;
        //Comparar los elementos dentro del array
        for(int i = 0; i < size - paso -1; ++i){
            //si se desea ordenar de forma descendiente, se debe cambiar el '>' por un '<'.
            //cambiar los elementos  segun el orden deseado
            if (array[i] > array [i+1]){
                 int temp = array [i]; //realiza el cambio
                 array[i] = array[i+1];
                 array[i+1] = temp;

                 cambio=1;
            }
        }
        //si no hay cambio (cambio==0), ya se ordeno el array, esta es la optimizacion 

        if (cambio==0) //nos salimos y ahorramos tiempo de otras iteraciones
        break;
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
int datos []= {-2, 45, 0, 11, -9};
//Para encontrar el tamano del array

int size = sizeof(datos)/ sizeof(datos[0]);

BubbleSort(datos,size);

cout << "Array Ordenado de Manera Ascendente: \n";

Imprimir(datos,size);

}

//RESULTADO
//Array Ordenado de Manera Ascendente: 
// -9 -2 0 11 45