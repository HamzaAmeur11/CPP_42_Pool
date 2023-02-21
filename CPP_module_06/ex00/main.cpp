#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac != 2)
        std::cerr << "Error Param : enter one argument !!!!\n";
    std::string param = av[1];
    ScalarConverter::convert(param);
}