//Previo 2 B82870 PPT
#include <iostream>

int count; // Declaración de variable global

extern void write_extern(); // Declaración de  función externa

int main() { 
    count = 5; // Asignamos el valor 5 a la variable global 'count'
    
    // Llamamos 'write_extern' 
    write_extern(); 

    return 0; 
}

// Definición de la función 'With_extern' (escrito incorrectamente como 'With_extern(void)')
void write_extern(void) {
    // Mostramos el valor de la variable global 'count'
    std::cout << "Count is " << count << std::endl;
}


//RESULTADO:  Count is 5