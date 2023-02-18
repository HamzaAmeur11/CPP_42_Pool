

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

// int main () {
//     srand(time(NULL));

// 	Bureaucrat B = Bureaucrat("Buro", 1);
// 	Bureaucrat C;//(bureaucrat, 150)
// 	PresidentialPardonForm f1("chahadat_Sokna");
// 	PresidentialPardonForm f2;//(form, false, 15, 1)


// 	B.signForm(f1);
// 	f1.execute(B);


// 	C.signForm(f2);
// 	f2.execute(C);



// }

int main()
{
    srand(time(NULL));

    try{
        Bureaucrat a("m9adem", 150);
        Bureaucrat c("wakil", 32);
        Bureaucrat q("King", 4);
        ShrubberyCreationForm b("home");
        b.beSigned(q);
        b.execute(q);
        RobotomyRequestForm d("robot");
        d.beSigned(c);
        d.execute(c);
        // PresidentialPardonForm s("wiwiw");
        // s.beSigned(a);
        // s.execute(a);
    }catch(const std::exception &ex){
        std::cerr << ex.what();
    }
}
