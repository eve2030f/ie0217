//Previo 7 Evelyn Feng Wu B82870
//Ejemplo de un Sort

#include <iostream> //std::cout
#include <algorithm> //std::sort
#include <vector> //std::vector

bool myfunction (int i,int j){ return (i<j);}

struct myClass{
    bool operator() (int i,int j){return (i<j);} //retorna falso o verdadero
} myobject;

int main (){
    int myints[]= {32,71,12,45,26,80,53,33}; //crea arreglo
    std:: vector <int> myvector (myints, myints+8); //crea vector desde referecia hasta referencia +1s

    //usando comparasion por default (operador<)

    std:: sort (myvector.begin(), myvector.begin()+4);  //ordene vector de begin a begin + 4, primeros 4 elementos de menor a mayor

    //usando funcion como comp

    std::sort (myvector.begin()+4, myvector.end(),myfunction); //ordenar ultimos cuatro de forma ascendente, del +4 al ultimo

    //usando objeto como comp

    std::sort(myvector.begin(),myvector.end(),myobject); //del inicio al final
    
    //imprimiendo el contenido

    std:: cout << "Mi vector contiene a: "; //sin salto de linea imprime
    for (std:: vector<int>::iterator it=myvector.begin(); it!=myvector.end();++it) //contenido separado por espacios
    std::cout<<" "<<*it;
    std::cout<<"\n";
    return 0;
}
//Resultado
//Mi vector contiene a:  12 26 32 33 45 53 71 80