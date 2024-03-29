#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sys/time.h>
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
        
        void makeTime();
        void printCurrentTime(const std::string &);;
        void beginSortin();

        template <typename Container>
        void insertionSort(Container &cont){
            typedef typename Container::iterator iterator;

            iterator it, it2, it3;
            int key;
            for(it = cont.begin(); it != cont.end(); ++it){
                it2 = it;
                while (it2 != cont.begin()){
                    it3 = it2;
                    --it3;
                    if(*it2 < *it3){
                        //swap
                        key = *it2;
                        *it2 = *it3;
                        *it3 = key;

                        it2 = it3;
                    }
                    else {
                        break;
                    }
                }
            }
        }

        template <typename Container>
        void mergeSortin(Container &cont){
            if (cont.size() < 10)
                return insertionSort(cont);
            size_t middle = cont.size() / 2;
            size_t i = 0;
            Container left;
            Container right;
            typename Container::iterator it = cont.begin();
            while (it !=  cont.end() && i < cont.size()){
                if (i < middle)
                    left.push_back(*it);
                else
                    right.push_back(*it);
                it++;
                i++;
            }
            this->mergeSortin(left);
            this->mergeSortin(right);
            this->merge(cont, left, right);
        }
        
        template <typename Container>
        void merge(Container &cont, Container &left, Container &right){
            size_t l = 0, r = 0;
            typename Container::iterator it = cont.begin(), itL = left.begin(), itR = right.begin();;
            while (l < left.size() && r < right.size()){
                if (*itL < *itR){
                    *it = *itL;
                    it++;itL++;l++;
                }else{ 
                    *it = *itR;
                    it++;itR++;r++;
            }}
            while (l < left.size()){
                    *it = *itL;
                    it++;itL++;l++;
            }
            while (r < right.size()){
                    *it = *itR;
                    it++;itR++;r++;
            }
        }

};
