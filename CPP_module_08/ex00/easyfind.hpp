#pragma once

#include <iostream>
#include <string>
#include <vector>


template <typename T>
typename T::const_iterator easyfind(const T &t, int i){
    typename  T::const_iterator it = std::find(t.begin(), t.end(), i);
    if (it == t.end())
        throw (std::invalid_argument("Invalid Args..."));
    return it;
}

template <typename T>
typename T::iterator easyfind(T &t, int i){
    typename  T::iterator it = std::find(t.begin(), t.end(), i);
    if (it == t.end())
        throw (std::invalid_argument("Invalid Args..."));
    return it;
}