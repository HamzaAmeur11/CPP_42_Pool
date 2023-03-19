#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>


class RPN{
    private:
        std::stack<std::string> st;
        RPN();
        const RPN&operator=(const RPN&);
    public:
        RPN(std::string&);
        ~RPN();

        void calcule(char);
};