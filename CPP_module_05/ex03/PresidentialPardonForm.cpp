#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", false, 25, 5){
	this->target = "Target";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm(other.getName(), false, 25, 5){
	*this = other;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", false, 25, 5){
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() { ; }

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	this->target = other.target;
	AForm::operator=(other);
	return *this;
}

std::string const &PresidentialPardonForm::getTarget(){
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &bur) const{
	bur.executeForm(*this);
	if (bur.getGrade() <= this->getExeIt() && this->isSignet())
        std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n" ;
}