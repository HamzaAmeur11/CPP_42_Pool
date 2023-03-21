#include "RPN.hpp"

void RPN::calcule(char op){
    if (st.size() < 2){
        std::cerr << "ERROR : Size of stack is : " << st.size() << "\n";
        exit(1);
    }
    int second = std::stoi(st.top());
    st.pop();
    int first = std::stoi(st.top());
    st.pop();
    int result = 0;
    std::stringstream ss;
    if (op == '+')
        result = first + second;
    else if (op == '-')
        result = first - second;
    else if (op == '*')
        result = first * second;
    else if (op == '/'){
        if (second == 0){
            std::cerr << "ERROR : diviise By 0 ???\n";
            exit (1);
        }
        result = first / second;
    }
    ss << result;
    st.push(ss.str());
}

const RPN& RPN::operator=(const RPN &other){
    this->st = other.st;
    return *this;
}

RPN::RPN(std::string& arg){
    std::string::iterator it = arg.begin();
    std::string s;
    while (it != arg.end()){
        if ( *it == '+' || *it == '-' || *it == '*' || *it == '/' ){
            calcule(*it);
            s = "";
        }
        else if (*it >= '0' && *it <= '9'){
            s.push_back(*it);
            this->st.push(s);
            s = "";
        }
        else if (*it != ' '){
            std::cerr << "ERROR\t:: |" << *it << "|\n";
            exit(1) ;
        }
        it++; 
    }
    std::cout << st.top() << std::endl;
}

RPN::~RPN(){ ; }