

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
	Bureaucrat a("m9adem", 150);
    Bureaucrat c("wakil", 32);
    Bureaucrat q("King", 5);
    ShrubberyCreationForm b("home");
    b.beSigned(a);
    b.execute(a);
    RobotomyRequestForm d("robot");
    d.beSigned(c);
    d.execute(c);
    PresidentialPardonForm s("wiwiw");
    s.beSigned(q);
    s.execute(q);
}
