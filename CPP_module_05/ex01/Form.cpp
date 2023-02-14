#include "Form.hpp"

Form::Form():Name("FormName"), SignIt(15), ExeIt(0), si(false){ ; }

Form::Form(const std::string &s, bool si, const int&signit, const int&exeit) :Name(s), si(si), SignIt(signit), ExeIt(exeit){
	try{
		if (SignIt >  150 || ExeIt > 150)
			throw GradeTooLowException();
		else if (SignIt < 1 || ExeIt < 1)
			throw GradeTooHighException();
	}catch(const std::exception &ex){
		std::cerr << ex.what() << "\n";
	}
}

Form::Form(const Form &other):Name(other.Name), SignIt(other.SignIt), ExeIt(other.ExeIt){
	*this = other;;
}

Form::~Form(){ ; }

Form &Form::operator=(const Form &other){
	si = other.si;
};

const std::string &Form::getName(){
	return this->Name;
}

int Form::gitSigneIt(){
	return this->SignIt;
}
int Form::gitExeIt(){
	return this->ExeIt;
}
bool Form::isSignet(){
	return this->si;
}
void Form::beSigned(const Bureaucrat& b){
	try{
		if (b.getGrade() > SignIt)
			throw GradeTooLowException();
		else
			si == true;
	}catch(const std::exception &ex){
		std::cerr << ex.what() << std::endl;;
	}
}


std::ostream& operator<<(std::ostream &os, const Form &f){
	os << "Name : " << f.getName() << std::endl;
    os << "Grade require to signed : " << f.gitSigneIt() << std::endl;
    os << "Grade require to execut : " << f.gitExeIt() << std::endl;
	if (f.isSignet() == false)
    	os << "Status: not signed" << std::endl;
	else
		os << "Status: Signed\n";
    return os;
}
