//Previo 2 B82870 PPT
#include <iostream>
#include <cstring> //copiar cadenas, concatenar cadenas, obtener la longitud 

using namespace std;

// Definición de la estructura Books para representar información de libros
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    // Declaración de dos estructuras Books: Book1 y Book2
    struct Books Book1;
    struct Books Book2;

    // Especificaciones del libro 1 (Book1)
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407; // Corregido el valor del book_id

    // Especificaciones del libro 2 (Book2)
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700; // Corregido el valor del book_id

    // Imprimir información del libro 1 (Book1)
    cout << "Book 1 title: " << Book1.title << endl;
    cout << "Book 1 author: " << Book1.author << endl;
    cout << "Book 1 subject: " << Book1.subject << endl;
    cout << "Book 1 id: " << Book1.book_id << endl;

    // Imprimir información del libro 2 (Book2)
    cout << "Book 2 title: " << Book2.title << endl;
    cout << "Book 2 author: " << Book2.author << endl;
    cout << "Book 2 subject: " << Book2.subject << endl;
    cout << "Book 2 id: " << Book2.book_id << endl;

    return 0; 
}

//Imprime la info de los libros/ resultado
//Book 1 title: Learn C++ Programming
//Book 1 author: Chand Miyan
//Book 1 subject: C++ Programming
//Book 1 id: 6495407
//Book 2 title: Telecom Billing
//Book 2 author: Yakit Singha
//Book 2 subject: Telecom
//Book 2 id: 6495700
