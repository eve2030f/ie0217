//Previo 9 Evelyn Feng Wu B82870

#include <iostream>
#include <regex> //libreria con todos los metodos posibles

int main() {
    auto const regex = std::regex("(my|your) regex"); //variable tipo regex, de manera automatica sabe q es regex, agrupamiento

    //textos
    auto const  myText = std::string("A piece of text that contains my regex.");
    bool const myTextContainsRegex = std::regex_search(myText, regex); //compara con expresion regular

    auto const  yourText = std::string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    auto const  theirText = std::string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    //impresion de lo que obtuvo, es bool devuelve verdadero si cumple o falso si no
    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';
}

//RESULTADO
//true
//true 
//false