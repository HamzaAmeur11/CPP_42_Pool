#include "easyfind.hpp"

int main(){
    try{
        std::vector<int> v1;
        for(int i = 0; i < 10 ; i++)
            v1.push_back(i);
        std::vector<int>::const_iterator it = easyfind(v1, 70);
        std::cout << *it << std::endl;;
    }catch(const std::exception &ex){
        std::cout << ex.what() << "\n";
    }
    try{
        std::vector<int> v2;
        for(int i = 0; i < 10 ; i++)
            v2.push_back(i);
        std::vector<int>::iterator it = easyfind(v2, 7);
        std::cout << *it << std::endl;;
    }catch(const std::exception &ex){
        std::cout << ex.what() << "\n";
    }
}