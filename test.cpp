#include <iostream>

template <typename T>
T  add(T a, T b)
{
    return (a + b);
}

int main()
{
    std::cout << add(std::string("said"),std::string(" is the")) << std::endl;
}