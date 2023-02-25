#pragma once

#include <iostream>
#include <string>
#include <vector>

class Span{
    private:
        unsigned int    N;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int);
        Span(const Span&);
        ~Span();
        Span& operator=(const Span&);
        void addNumber(int);
        void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
        int shortestSpan();
        int longestSpan();
};