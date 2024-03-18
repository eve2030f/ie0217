// Comenzamos el Previo 2 B82870
//incluye iostream para ver impresiones en pantalla
# include <iostream>

//int main( ) {
	    //std:: cout<< "Hola Mundo, estudiantes de IE0217!\n"; //salida en texto

		//acá comenzamos los cambios del previo 2 : OPERADOR TERNARIO
		//int var1 = 0; 
		//int var2; //para usar operador ?: que devuleve valor de acuerdo a condición 

		//var2 = (var1 == 3) ? 15 : 27;

		//std:: cout<< "var2: \n" << var2 << "\n";  // imprime var 2

    	//return 0;

/*Hola Mundo, estudiantes de IE0217!
var2: 
27*/


		//Parte 2:utilizando el switch case

		//int var1 = 52;
		//int var2 = 2;
		//int var3 = 2;

		//switch (var1) {
			//case 1:
				//std::cout << "Case 1!\n"; //si se selecciona var1 
				//break;
			//case 2:
				//std::cout << "Case 2\n"; //si se selecciona var2 
				//break;
			//case 3:
				//std::cout << "Case Final!\n";  //si se selecciona var3
				//break;
			//default:
				//std::cout << "Case default!\n"; // si no es 1 2 o 3 cae aca
				//break;

// al seleccionar var1 = 1 la salida es: Case1!
// al seleccionar var1 = 3 la salida es: Case3!
// si se quita el case 2 cuando cae en case 2 cae en case final = case 3


		//}
//}

//PARTE 3 USO DE ARGUENTOS DENTRO DEL MAIN
int main(int argc,char* argv[]) {
	std::cout << "argc:" << argc<<std::endl;
	std::cout << "argv:" << argv[0]<<std::endl;
	std::cout << "argv:" << argv[1]<<std::endl;
	std::cout << "argv:" << argv[2]<<std::endl;
	std::cout << "argv:" << argv[3]<<std::endl;


///RESULTADO1  ./holaMundo.exe
//argc:1 un argumento del nombre del programa
	
//RESULTADO2 ./holaMundo.exe 5
//argc:2 		dos argumentos con el nombre del programa y el numero
//argv:./holaMundo.exe

//RESULTADO3 ./holaMundo.exe 5 hola 65
//argc:4 		3 arguemntos mas el nombre del programa
//argv:./holaMundo.exe


//RESULATADO4 CON EL CAMBIO EN STRINGS DE LAS VARIABLES
// ./holaMundo.exe 5 hola 65
//argc:4
//argv:./holaMundo.exe
//argv:5
//argv:hola
//argv:65		nos ayudan a pasar al mainargumentos
	return 0;

}
	
