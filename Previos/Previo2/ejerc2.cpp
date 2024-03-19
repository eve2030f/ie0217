// Previo 2 B82870 EJERCICIO DOS DEL VIDEO

# include <iostream>
int main( ) {
	std:: cout<< "Hola Mundo, estudiantes de IE0217!\n"; //salida en texto
//Parte 2:utilizando el switch case
	int var1 = 52;
	//int var2 = 2;
	//int var3 = 2;
	switch (var1) {
		case 1:
			std::cout << "Case 1!\n"; //si se selecciona var1 
		    break;
		case 2:
			std::cout << "Case 2\n"; //si se selecciona var2 
			break;
		case 3:
			std::cout << "Case Final!\n";  //si se selecciona var3
			break;
		default:
			std::cout << "Case default!\n"; // si no es 1 2 o 3 cae aca
			break;

// Si var1 = 1 la salida es: Case1!
// si var1 = 3 la salida es: Case3!
// si se quita el case 2 cuando cae en case 2 cae en case final = case 3

// CUANDO NO ES 1 2 O 3 se obtiene el siguietne resutlado:
//Hola Mundo, estudiantes de IE0217!
//Case default!

		}
}
