#pragma once

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>{
    private:

    public:
        MutantStack(){ ; }
        ~MutantStack(){ ; }
        MutantStack(const MutantStack&other){ *this = other; }
        MutantStack &operator=(const MutantStack&other){
            std::stack<T>::operator=(other);
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator            iterator;
        typedef typename std::stack<T>::container_type::const_iterator     const_iterator;

        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end ();}
        const_iterator cbegin(){return this->c.begin();}
        const_iterator cend(){return this->c.end ();}
};