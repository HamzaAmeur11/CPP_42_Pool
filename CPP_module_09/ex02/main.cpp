#include "PmergeMe.hpp"

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