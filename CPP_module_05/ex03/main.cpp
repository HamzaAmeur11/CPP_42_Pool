

#include "Intern.hpp"
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
    Intern In;
    AForm *form1 = In.makeForm("ShrubberyCreationForm", "shhh");
    AForm *form2 = In.makeForm("RobotomyRequestForm", "robot");
    AForm *form3 = In.makeForm("PresidentialPardonForm", "wiwi");
    AForm *form4 = In.makeForm("", "");

	  form1->beSigned(a);
    form1->execute(a);
    form2->beSigned(c); 
    form2->execute(c); 
    form3->beSigned(q); 
    form3->execute(q);
	try{
		if (form4 == nullptr)
			throw (Intern::WrongForm());
    	form4->beSigned(a);
    	form4->execute(a);
		  delete form4;
    }catch(std::exception &ex){
		std::cerr << "form : "<< ex.what() << "\n";
	}
	delete form1;
	delete form2;
	delete form3;
}
