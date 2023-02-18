#include "Intern.hpp"
#include <stdlib.h>


int main()
{
	try{
		Bureaucrat a("m9adem", 1);
		Bureaucrat c("wakil", 1);
		Bureaucrat q("King", 1);
		Intern In;
		AForm *form1 = In.makeForm("shrubbery creation", "shhh");
		AForm *form2 = In.makeForm("robotomy request", "robot");
		AForm *form3 = In.makeForm("presidential pardon", "wiwi");
		// AForm *form4;
		// form4 = In.makeForm("", "");
		form1->beSigned(a);
		form1->execute(a);
		form2->beSigned(c); 
		form2->execute(c); 
		form3->beSigned(q); 
		form3->execute(q);
		// form4->beSigned(a);
		// form4->execute(a);
		delete form1;
		delete form2;
		delete form3;
    }catch(std::exception &ex){
    std::cerr << ex.what() << "\n";
	}

}
