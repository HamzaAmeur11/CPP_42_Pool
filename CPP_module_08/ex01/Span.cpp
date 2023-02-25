#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int n){
    if (n < 0)
        throw std::invalid_argument("Constructor(n) : n < 0 !!!!");
    N = n;
}

Span::Span(const Span& other){*this = other;}

Span::~Span(){}

Span& Span::operator=(const Span& other){
    this->N = other.N;
    this->arr = other.arr;
    return *this;
}

void Span::addNumber(int i){
    if (arr.size() == (size_t)N)
        throw std::invalid_argument("Array is full");
    arr.push_back(i);
}

int Span::shortestSpan(){
    if (arr.size() == 1 || arr.empty())
        throw std::invalid_argument("shortSpan: arr.size() <= 1");

    int ret = INT_MAX;
    std::vector<int>::iterator it = arr.begin();
    std::vector<int>::iterator it2 = arr.begin();

    while (it != arr.end()){
        it2 = it + 1;
        while (it2 !=  arr.end()){
            if (abs(*it - *it2) < ret)
                ret = abs(*it - *it2);
            it2++;
        }
        it++;
    }
    return ret;
}

int Span::longestSpan(){
    if (arr.size() == 1 || arr.empty())
        throw std::invalid_argument("shortSpan: arr.size() <= 1");

    int ret = 0;
    std::vector<int>::iterator it = arr.begin();
    std::vector<int>::iterator it2 = arr.begin();

    while (it != arr.end()){
        it2 = it + 1;
        while (it2 !=  arr.end()){
            if (abs(*it - *it2) > ret)
                ret = abs(*it - *it2);
            it2++;
        }
        it++;
    }
    return ret;
}

void Span::addNumber(std::vector<int>::iterator s, std::vector<int>::iterator e){
    while (s != e){
        arr.push_back(*s);
        s++;
    }
}