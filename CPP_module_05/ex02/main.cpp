

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main () {

	Bureaucrat B = Bureaucrat("Buro", 1); 
	Bureaucrat C;//(bureaucrat, 150)
	AForm f1("chahadat Sokna", false, 75, 1);
	AForm f2;//(form, false, 15, 1)

	f1.beSigned(B);
	std::cout <<"----------\n";
	B.signForm(f1);
	std::cout <<"----------\n";
	f1.beSigned(C);
	std::cout <<"----------\n";
	C.signForm(f1);
	std::cout <<"----------\n";

	f2.beSigned(B);
	std::cout <<"----------\n";
	B.signForm(f2);
	std::cout <<"----------\n";
	f2.beSigned(C);
	std::cout <<"----------\n";
	C.signForm(f2);
}
