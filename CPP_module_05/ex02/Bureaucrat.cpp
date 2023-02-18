#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Bureaucrat"), Grade(150) { ; }

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : Name(ref.getName()){
	if (ref.getGrade() < 1)
		throw GradeTooHighException();
	else if (ref.getGrade() > 150){
		throw GradeTooLowException();
	}else
		setGrade(ref.getGrade());
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name){
	if (grade < 1){
		throw GradeTooHighException();
	}else if (grade > 150){
		throw GradeTooLowException();
	}else
		setGrade(grade);
}

Bureaucrat::~Bureaucrat() { ; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other){
	if (other.getGrade() < 1){
		throw GradeTooHighException();
	}else if (other.getGrade() > 150){
		throw GradeTooLowException();
	}else
		this->Grade = other.Grade;
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return this->Name;
}

int Bureaucrat::getGrade() const
{
	return this->Grade;
}

void Bureaucrat::setGrade(int const &g)
{
	Grade = g;
}

void Bureaucrat::increment(){
	if (Grade == 1)
		throw GradeTooHighException();
	else
		Grade--;
}

void Bureaucrat::decrement(){
	if (Grade == 150)
		throw GradeTooLowException();
	else
		Grade++;
}

void Bureaucrat::signForm(AForm &f){
	if (this->getGrade() < f.getSigneIt()) {
		std::cout << this->getName() << " Signed " << f.getName() << std::endl;
		f.Signed(true);
	} else
		throw AForm::GradeTooLowException();
}

void Bureaucrat::executeForm(AForm const &form) const{
		if (this->getGrade() > form.getExeIt())
			throw AForm::GradeTooLowException();
		else if (!form.isSignet())
			throw AForm::NotSignedException();
		else if (this->getGrade() < 1)
			throw AForm::GradeTooHighException();
		else
			std::cout << this->getName() << " Executed " << form.getName() << '\n';
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << " : bureaucrat grade " << b.getGrade();
	return (out);
}
