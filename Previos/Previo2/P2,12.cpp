//Previo 2 B82870 PPT
#include <iostream> 

int main(int argc, char* argv[]) { 
    std::cout<< "Número de argumentos:  " <<argc <<std::endl; //imprime cant de argumentos
    std::cout<< "Nombre del programa:  " << argv[0] << std::endl; //imprime nombre del programa
    //- Imprimir argumentos- adicionales si existen 
    if (argc > 1) {
    std::cout<< "Argumentos  adicionales: " << std::endl;
    for (int i = 1;  i < argc;  ++i){
    std::cout << "argv["  << i << " ]: "  <<argv[i] << std::endl;
    }
    }

return 0; 
}
//RESULTADO
//Número de argumentos:  1
//Nombre del programa:  ./P2,12.exe