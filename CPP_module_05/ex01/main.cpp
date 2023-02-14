

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	Bureaucrat B = Bureaucrat("Buro", 1);
	Bureaucrat C;

	B = C;

	B.increment();
}
