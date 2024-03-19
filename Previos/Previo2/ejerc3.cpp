// Previo 2 B82870 ejercicio 3 del video
//incluye iostream para ver impresiones en pantalla
# include <iostream>

//PARTE 3 USO DE ARGUENTOS DENTRO DEL MAIN
int main(int argc,char* argv[]) {
	std::cout << "argc:" << argc<<std::endl;
	std::cout << "argv:" << argv[0]<<std::endl;
	std::cout << "argv:" << argv[1]<<std::endl;
	std::cout << "argv:" << argv[2]<<std::endl;
	std::cout << "argv:" << argv[3]<<std::endl;

return 0;

///RESULTADO1  ./holaMundo.exe
//argc:1 un argumento del nombre del programa
	
//RESULTADO2 ./holaMundo.exe 5
//argc:2 		dos argumentos con el nombre del programa y el numero
//argv:./holaMundo.exe

//RESULTADO3 ./holaMundo.exe 5 hola 65
//argc:4 		3 arguemntos mas el nombre del programa
//argv:./holaMundo.exe


//RESULATADO4 CON EL CAMBIO EN STRINGS DE LAS VARIABLES:  ./ejerc3.exe 5 hola 65
//argc:4
//argv:./ejerc3.exe
//argv:5
//argv:hola
//argv:65		nos ayudan a pasar al main argumentos

}
	
