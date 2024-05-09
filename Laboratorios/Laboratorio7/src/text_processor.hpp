//Laboratorio 7 Evelyn Feng Wu B82870 

#ifndef TEXT_PROCESSOR_HPP
#define TEXT_PROCESSOR_HPP
#include <string>


class TextProcessor {
    //atributos
    private:
        std::string input_filename;
        std::string output_filename;
    public:
        TextProcessor(const std::string& input_filename, const std::string& output_filename);
         //constante para que no se modifique la variable y garantiza mejores optimizaciones para usatlo tal cual
         void replace(const std::string& search_pattern, const std::string& replace_string);
};

#endif // TEXT_PROCESSOR_HPP