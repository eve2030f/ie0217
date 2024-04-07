//PREVIO 5 B82870 EVELYN F.
//Implementando un Stack en C++
//NOTA: SE CAMBIO LA VARIABLE GLGOBAL size POR structSiza para que pudiera compilar


#include<iostream>
#include <cstdlib>
using namespace std;

#define MAX 10 // define variable max 10
int stackSize = 0; // variable global para el tamaño del stack

// ESTRUCTURA DE pila
// Crea un stack
// crea estructura con dos elementos
struct stack {
    int items[MAX]; // un arreglo
    int top; // un entero
};

typedef struct stack st; // define

void createEmptyStack(st *s) {
    s->top = -1; // recibe direccion y en struct lo llama
}

// Revisa si el stack esta lleno
int isfull(st *s) {
    if (s->top == MAX - 1) // 1 del 0 al 9 por lo que sale vacio
        return 1; // true
    else
        return 0; // false no llena
}

// Revisa si el stack esta vacio
int isempty(st *s) {
    if (s->top == -1)
        return 1; // true
    else
        return 0; // false no vacio
}

// Metiendo elementos al stack
void push(st *s, int newitem) {
    if (isfull(s)) {
        cout << "STACK LLENO";
    } else {
        s->top++; // si no lleno, aumenta en un indice o elemento
        s->items[s->top] = newitem; // agrega nuevo item
    }
    stackSize++; // aumenta tamaño en 1, variable global
}

// Quita elementos del stack
void pop(st *s) {
    if (isempty(s)) {
        cout << "\n STACK VACIO\n";
    } else {
        cout << "Item sacado= " << s->items[s->top];
        s->top--;
    }
    stackSize--;
    cout << endl;
}

// Imprime los elementos del stack
void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < stackSize; i++) {
        cout << s->items[i] << ""; // imprime del 0 al 4 si pone 5 para el stack
    }
    cout << endl;
}

// Codigo Principal
int main() {
    int ch;
    st *s = (st *) malloc(sizeof(st)); // almacena en heap bytes par aun stack

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s); // metidos

    pop(s); // imprime el ultimo q entra que es el rpimero que sale

    cout << "\nDespues de sacar:\n";
    printStack(s); // reimprime

    free(s); // liberar memoria asignada
    return 0;
}


//RESULTADO
//Stack: 1234
//Item sacado= 4
//
//Despues de sacar:
//Stack: 123