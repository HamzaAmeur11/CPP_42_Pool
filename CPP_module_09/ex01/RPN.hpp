#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>


class RPN{
    private:
        std::stack<std::string> st;
        RPN();
    public:
    
        const RPN&operator=(const RPN&);
        RPN(std::string&);
        ~RPN();

        void calcule(char);
};