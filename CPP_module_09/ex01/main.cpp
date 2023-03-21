#include "RPN.hpp"

int main(int ac, char *av[]){
    if (ac != 2)
        return std::cerr << "ERROR :: Arguments\n", 1;
    std::string s(av[1]);
    RPN rpn(s);
}