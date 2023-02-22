#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, uint size, void fct(T&)){
    for (uint i = 0; i < size ; i++)
        fct(arr[i]);
}