//Laboratorio 7 Evelyn Feng Wu B82870 

#include "text_processor.hpp"
#include <fstream>
#include <regex>

TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    //nomenclatura compacta para asignaciones
    :input_filename (input_filename), output_filename(output_filename){}

void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string) {
    std::ifstream input_file(input_filename);  //inputfile stream
    std::ofstream output_file(output_filename); //outputfile stream
    std::string line;

    std::regex pattern(search_pattern);
//patron de lineas que busca hasta encuentrar dato para reemplazar
    if(input_file && output_file){
        while(getline(input_file, line)){
            std::string replaced = std::regex_replace(line, pattern, replace_string);
            output_file<<replaced<< "\n"; //replace en outputfile 
        }
    }
}