//Previo 3 B82870 Eveyn F.

//solicita al usuario que ingrese el número máximo de entradas, luego solicita al usuario que ingrese números uno por uno hasta alcanzar el número máximo de entradas o hasta que se ingrese un número negativo. Luego calcula y muestra el promedio de los números ingresados (excluyendo el número negativo).


#include <iostream> 

using namespace std; 

int main() {
    float num, average, sum = 0.0; // Declara variables 
    int i, n; 

    cout << "Maximum number of inputs: "; // Ingrese el número máximo de entradas
    cin >> n; // Lee el número máximo de entradas 

    for(i = 1; i <= n; ++i) // Bucle para ingresar números
    {
        cout << "Enter n" << i << ":  "; // Pide al usuario que ingrese un número
        cin >> num; // Lee el número ingresado desde la entrada estándar

        if (num < 0.0) // Si se ingresa un número negativo, salta al código etiquetado como 'jump'
        {
            goto jump; // Salta al código etiquetado como 'jump'
        }

        sum += num; // Suma el número ingresado al total
    }

    jump: // Etiqueta de destino para el salto

    average = sum / (i - 1); // Calcula el promedio dividiendo la suma total por la cantidad de números ingresados (excluyendo el número negativo)

    cout << "\nAverage = " << average; // Imprime el promedio

    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}

//resultado
//Maximum number of inputs: 2
//Enter n1:  200
//Enter n2:  300
//
//Average = 250