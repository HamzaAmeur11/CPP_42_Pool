#include "PmergeMe.hpp"

// int isDigit(std::string arg){
//     for(size_t i = 0; i < arg.length(); i++){
//         if (arg[i] < '0' || arg[i] > '9')
//             return -1;
//     }
//     return 0;
// }

// int parseDigits(std::string arg, std::vector<int> &_vec){
//     if (isDigit(arg) < 0)
//         return std::cerr << "ERROR Bad Arg\n" , -1;
//     _vec.push_back(std::atoi(arg.c_str()));
//     return 0;
// }

int main(int ac, char **av){
    if (ac < 2)
        return std::cerr << "ERROR Args\n", -1;
    std::string args[ac - 1];
    for(int i = 1; i < ac; i++){
        args[i - 1] = av[i];
    }
    
    mergeMe merge(args, ac - 1);
    merge.beginSortin();
}