#include "iter.hpp"

template<typename T>
void fct(T  &a){
    a++;
}

int main(){
    int tab[10] = {1,2,3,4,5,6,7,8,9, -1};
    char str[10] = {'a','a','a','a','a','a','a','a','a', 0};
    iter(tab, 10, fct);
    iter(str, 10, fct);

    for(int i = 0; i < 9; i++)
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
    std::cout << "\n\n";
    for(int i = 0; i < 9; i++)
        std::cout << "str[" << i << "] = " << str[i] << std::endl;
}