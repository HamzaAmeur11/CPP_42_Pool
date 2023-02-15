

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
  try
  {
    Bureaucrat b("bur", 2);
    Bureaucrat b1("buraa", 0);
    ShrubberyCreationForm s = ShrubberyCreationForm("sh");
	s.beSigned(b1);
	std::cout << b1.getGrade() <<" aaaaaaaa \n";
    s.execute(b1);
    PresidentialPardonForm p = PresidentialPardonForm("presedent");
    p.beSigned(b);
    p.execute(b);
    b.executeForm(s);
    std::cout << "---------------------- \n";
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << '\n';
  }
}