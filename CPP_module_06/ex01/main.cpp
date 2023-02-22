#include "Serializer.hpp"

int main(){
    Data data1;
    data1.x = 10000;
    data1.c = 'A';

    Data *ptr = Serializer::deserialize(Serializer::serialize(&data1));
    if (ptr != NULL)
        std::cout << "ptr->x = " << ptr->x << " | ptr->c = " << ptr->c << std::endl;
    else
        std::cerr << "Ptr == NULL ????\n";
}