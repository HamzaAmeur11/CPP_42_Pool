#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Bureaucrat"), Grade(1){ ; }

Bureaucrat::Bureaucrat(const Bureaucrat &ref): Name(ref.getName()){
	try{
		if (ref.getGrade() < 0){
			throw GradeTooHighException();
			setGrade(1);
		} else if (ref.getGrade() > 151){
			throw GradeTooLowException();
			setGrade(150);
		} else
			setGrade(ref.getGrade());
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade): Name(name){
	try{
		if (grade < 0){
			throw GradeTooHighException();
			setGrade(1);
		} else if (grade > 151){
			throw GradeTooLowException();
			setGrade(150);
		} else
			setGrade(grade);
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(){ ; }

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other){

	try{
		if (other.getGrade() < 0){
			throw GradeTooHighException();
			setGrade(1);
		} else if (other.getGrade() > 151){
			throw GradeTooLowException();
			setGrade(150);
		} else
			*this = other;
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;
	}
}

std::string const	Bureaucrat::getName() const{
	return this->Name;
}

int		Bureaucrat::getGrade() const{
	return this->Grade;
}

void	Bureaucrat::setGrade(int const &g){
	Grade = g;
}

void	Bureaucrat::increment(){
	try{
		if (Grade == 1)
			throw GradeTooHighException();
		else
			Grade--;
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;
	}
}

void	Bureaucrat::decrement(){
try{
		if (Grade == 150)
			throw GradeTooLowException();
		else
			Grade++;
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;
	}
}
