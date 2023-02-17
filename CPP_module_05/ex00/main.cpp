

#include "Bureaucrat.hpp"

int main () {

	try{
		Bureaucrat B = Bureaucrat("Buro", 1);
		Bureaucrat C;//("Bureaucrat", 150)
		C.increment();
		// B.increment(); //throw ex
		std::cout << "Buro C : grade = "<< C.getGrade() << '\n';

		C = B;
		C.decrement();
		std::cout << "Buro C : grade = " << C.getGrade() << '\n';
	}catch(const std::exception &ex){
		std::cerr << ex.what() << '\n';
	}
}
