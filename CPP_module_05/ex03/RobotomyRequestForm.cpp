#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", false, 72, 45){
	this->target = "Target";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm(other.getName(), false, 72, 45){
	*this = other;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", false, 72, 45){
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() { ; }

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
	this->target = other.target;
	AForm::operator=(other);
	return *this;
}

std::string const &RobotomyRequestForm::getTarget(){
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &bur) const{
	bur.executeForm(*this);
    srand(time(NULL));
	if (bur.getGrade() <= this->getExeIt() && this->isSignet()){
        int iRand = rand() % 10;
        // std::cout << iRand << "\n";
        if (iRand % 2 == 1)
            std::cout << bur.getName() << " : Robotomized " << this->target << " OK!!!\n";
        else
            std::cout << bur.getName() << " : Robotomized " << this->target << " KO!!!\n";

    }
}
