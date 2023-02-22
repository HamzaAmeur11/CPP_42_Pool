#include "Base.hpp"

Base    *generate(void)
{
    srand(time(NULL));
    int iRand = rand() % 3;
    Base *ptr = NULL;
    switch (iRand)
    {
        case(0):
            ptr = new A;
            break;
        case(1):
            ptr = new B;
            break;
        case(2):
            ptr = new C;
            break;
    }
    return ptr;
}

void    identify(Base* p){
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "* the actual type of the object is A\n";
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << " the actual type of the object is B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << " the actual type of the object is C\n";
    else
        std::cerr << "Error castin\n" ;

}

void    identify(Base& p){
    try { 
        Base &r = dynamic_cast<A&>(p);
        (void)r; 
        std::cout << "& the actual type of the object is A\n";
        return ;
    }catch (std::bad_cast& ex){
        std::cerr << "Casting &A Err :" << ex.what() << "\n";
    }
    try { 
        Base &r = dynamic_cast<B&>(p);
        (void)r; 
        std::cout << "& the actual type of the object is B\n";
        return ;
    }catch (std::bad_cast& ex){
        std::cerr << "Casting &B Err :" << ex.what() << "\n";
    }
    try { 
        Base &r = dynamic_cast<C&>(p);
        (void)r; 
        std::cout << "& the actual type of the object is C\n";
        return ;
    }catch (std::bad_cast& ex){
        std::cerr << "Casting &C Err :" << ex.what() << "\n";
    }
    std::cerr << "Error castin\n" ;
}
