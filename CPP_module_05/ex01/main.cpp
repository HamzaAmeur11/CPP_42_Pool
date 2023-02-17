

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	try{
		Bureaucrat B = Bureaucrat("Buro", 1); 
		Bureaucrat C;//(bureaucrat, 150)
		Form f1("chahadat Sokna", false, 75, 1);
		Form f2;//(form, false, 15, 1)

		// B.increment();//throw ex
		std::cout << B << "\n\n";
		std::cout << f1 << '\n';
		std::cout << C << "\n\n";
		std::cout << f2 << '\n';

		std::cout <<"----------\n";
		f1.beSigned(B);
		std::cout <<"----------\n";
		B.signForm(f1);
		std::cout <<"----------\n";
		// f1.beSigned(C); // throw ex
		std::cout <<"----------\n";
		// C.signForm(f1);// throw ex
		std::cout <<"----------\n";

		f2.beSigned(B);
		std::cout <<"----------\n";
		B.signForm(f2);
		std::cout <<"----------\n";
		// f2.beSigned(C); // throw ex
		std::cout <<"----------\n";
		// C.signForm(f2); // throw ex

	}catch(const std::exception &ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout <<"______________________________\n";
	try{
		Bureaucrat B = Bureaucrat("KKKKKK", 40); 
		Bureaucrat C;//(bureaucrat, 150)
		Form f1("chahadat Sokna", false, 150, 1);
		Form f2;//(form, false, 15, 1)

		// B.increment();//throw ex
		std::cout << B << "\n\n";
		std::cout << f1 << '\n';
		std::cout << C << "\n\n";
		std::cout << f2 << '\n';

		std::cout <<"----------\n";
		f1.beSigned(B);
		std::cout <<"----------\n";
		B.signForm(f1);
		std::cout <<"----------\n";
		f1.beSigned(C); // throw ex
		std::cout <<"----------\n";
		// C.signForm(f1);// throw ex
		std::cout <<"----------\n";

		f2.beSigned(B);
		std::cout <<"----------\n";
		B.signForm(f2);
		std::cout <<"----------\n";
		// f2.beSigned(C); // throw ex
		std::cout <<"----------\n";
		// C.signForm(f2); // throw ex

	}catch(const std::exception &ex){
		std::cerr << ex.what() << '\n';
	}
}
