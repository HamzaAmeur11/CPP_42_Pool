#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>

class mergeMe{
    private:
        std::vector<int> _vec;
        std::list<int> _list;
        time_t _time;
        size_t length;

        mergeMe();

    public:
        mergeMe(std::string*, size_t);
        ~mergeMe();
        const mergeMe& operator=(const mergeMe&);
        int parseDigits(std::string *args);
        int isDigit(std::string arg);
        
        void merge(std::vector<int>&, std::vector<int>&, std::vector<int>&);
        virtual void merge(std::list<int>&, std::list<int>&, std::list<int>&); 
        void makeTime();
        void printCurrentTime();;
        virtual void mergeSortin(std::list<int> &);
        virtual void mergeSortin(std::vector<int>&);
        void beginSortin();

};