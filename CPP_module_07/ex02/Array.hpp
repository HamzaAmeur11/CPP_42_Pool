#pragma once 

#include <iostream>

template <typename T>
class Array{
    private :
        T*      Arr;
        int    Size;
    public:
        Array(){ this->Size = 0; Arr = NULL;};
        ~Array(){ if (Arr != NULL) delete Arr;};
        Array(int s) {
            this->Size = s;
            Arr = new (std::nothrow) T[s];
            if (!Arr)
                exit(1);
        };
        const Array   &operator=(const Array &other){
            if (this->Size)
                delete this->Arr;
            this->Size = other.Size;
            this->Arr = new (std::nothrow) T[Size];
            if (!Arr)
                exit(1);
            for(int i = 0; i < Size ; i++)
                this->Arr[i] = other.Arr[i];
            return *this;
        };
        Array(const Array &other) {
                this->Size = 0;
                *this = other;
            };
        T       &operator[](int i){ if (i < 0 || i >= Size) throw (std::exception()); return this->Arr[i];};
        int    size(){ return this->Size; };
};