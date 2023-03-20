#include "PmergeMe.hpp"

mergeMe::mergeMe(std::string *args, size_t length){
    this->length = length;
    std::cout << "l = " << this->length << "\n";
    if (this->parseDigits(args) < 0)
        exit(1);
}

const mergeMe& mergeMe::operator=(const mergeMe &other){
    this->_vec = other._vec;
    this->_list = other._list;
    return *this;
}

int mergeMe::isDigit(std::string arg){
    for(size_t i = 0; i < arg.length(); i++){
        if (arg[i] < '0' || arg[i] > '9')
            return std::cout << arg << "   aaaaaa\n", -1;
    }
    return 0;
}

int mergeMe::parseDigits(std::string *args){
    for(size_t i = 0; i < this->length; i++){
        if (isDigit(args[i]) < 0)
            return std::cerr << "ERROR Bad Arg\n" , -1;
        std::cout << "av = " << args[i] << "\n";
        _vec.push_back(std::atoi(args[i].c_str()));
        _list.push_back(std::atoi(args[i].c_str()));
    }
        std::cout << "\n";
    return 0;
}

mergeMe::~mergeMe(){ ; }

//************************************************//

void mergeMe::mergeSortin(std::list<int> &_list){
    if (_list.size() < 2)
        return ;
    size_t middle = _list.size() / 2;
    std::list<int> left;
    std::list<int> right;

    size_t i = 0;
    std::list<int>::iterator it = _list.begin();
    while (i < _list.size()){
        if (i < middle)
            left.push_back(*it);
        else 
            right.push_back(*it);
    }
    this->mergeSortin(left);
    this->mergeSortin(right);
    merge(_list, left, right);
}

void mergeMe::merge(std::list<int> &list, std::list<int>&left, std::list<int>&right){
    size_t l = 0, r = 0;
    std::list<int>::iterator it = list.begin(), itL = left.begin(), itR = right.begin();
    while (l < left.size() && r < right.size()){
        if (*itL < *itR){
            *it = *itL;
            it++;itL++;
        }else 
            *it = *itR;
            it++;itR++;
    }
    while (l < left.size()){
            *it = *itL;
            it++;itL++;
    }
    while (r < right.size()){
            *it = *itR;
            it++;itR++;
    }
}

void mergeMe::mergeSortin(std::vector<int> &_vec){
    if (_vec.size() < 2)
        return ;
    size_t middle = _vec.size() / 2;
    std::vector<int> left;
    std::vector<int> right;
    size_t i = 0;
    std::cout << "-------------------------------\n";
    std::vector<int>::iterator it = _vec.begin();
    while (it !=  _vec.end() && i < _vec.size()){
        std::cout << "it = " << *it << std::endl;
        if (i < middle)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
        i++;
    }
    std::vector<int>::iterator it2 = left.begin();
    std::vector<int>::iterator it3 = right.begin();

    while (it2 != left.end())
        {std::cout << "left = " << *it2 << "\n"; it2++;}
    while (it3 != right.end())
        {std::cout << "right = " << *it3 << "\n"; it3++;}
    this->mergeSortin(left);
    this->mergeSortin(right);
    this->merge(_vec, left, right);

}

void mergeMe::merge(std::vector<int>&vec, std::vector<int>&left, std::vector<int>&right){
    size_t l = 0, r = 0;
    std::vector<int>::iterator it = vec.begin(), itL = left.begin(), itR = right.begin();
    std::cout << "lft  and right == == " << left.size() << "  " << right.size() << "\n";
    
    while (l < left.size() && r < right.size()){
        
        if (*itL < *itR){
            *it = *itL;
            it++;itL++;l++;
        }else 
            *it = *itR;
            it++;itR++;r++;
    }
    while (l < left.size()){
            *it = *itL;
            it++;itL++;l++;
    }
    while (r < right.size()){
            *it = *itR;
            it++;itR++;r++;
    }
}


void mergeMe::makeTime(){
    time(&_time);
}

void mergeMe::printCurrentTime(){
    time_t current;
    time(&current);
    std::cout << "Time :: " << current - _time << "\n";
}


void mergeMe::beginSortin(){
    this->makeTime();
    this->mergeSortin(this->_vec);
    std::cout << "hello\n";
    std::vector<int>::iterator it = _vec.begin();
    while (it != _vec.end()){
        std::cout  << "it = "<< *it << std::endl;
        it++;
    }printCurrentTime();

    this->makeTime();
    this->mergeSortin(this->_list);
    printCurrentTime();
}