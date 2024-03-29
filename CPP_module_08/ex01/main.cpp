#include "Span.hpp"

int main()
{
   try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(6);
        sp.addNumber(6);
        sp.addNumber(6);
        sp.addNumber(6);
        sp.addNumber(6);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    try{
        srand(time(NULL));
        Span sp(10000);
        for(int i = 0; i < 10000; i++)
            sp.addNumber(rand());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(const std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

     try
    {
        Span sp1 = Span(5);
        sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
        sp1.addNumber(11);
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp2 = Span(5);
        sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp3 = Span(5);
        sp3.addNumber(11);
        std::cout << sp3.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp4 = Span(5);
        std::cout << sp4.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}