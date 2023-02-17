#include "Form.hpp"

Form::Form() : Name("FormName"), SignIt(1), ExeIt(1) { this->si = false; }

Form::Form(const std::string &s, bool si, const int &signit, const int &exeit) : Name(s), si(si), SignIt(signit), ExeIt(exeit)
{
	// try
	// {
		if (SignIt > 150 || ExeIt > 150)
			throw GradeTooLowException();
		else if (SignIt < 1 || ExeIt < 1)
			throw GradeTooHighException();
	// }
	// catch (const std::exception &ex)
	// {
	// 	std::cerr << ex.what() << "\n";
	// }
}

Form::Form(const Form &other) : Name(other.Name), SignIt(other.SignIt), ExeIt(other.ExeIt)
{
	*this = other;
}

Form::~Form() { ; }

Form &Form::operator=(const Form &other)
{
	Signed(other.si);
	return *this;
};

const std::string &Form::getName()
{
	return this->Name;
}

int Form::getSigneIt()
{
	return this->SignIt;
}
int Form::getExeIt()
{
	return this->ExeIt;
}
bool Form::isSignet()
{
	return this->si;
}
void Form::beSigned(Bureaucrat &b)
{
	// try
	// {
		if (b.getGrade() <= SignIt)
			si = true;
		else
			throw GradeTooLowException();
	// }
	// catch (const std::exception &ex)
	// {
	// 	std::cerr << ex.what() << std::endl;;
	// }
}

void Form::Signed(bool s)
{
	this->si = s;
}

std::ostream &operator<<(std::ostream &os, Form &f)
{
	os << "Name                    : " << f.getName() << std::endl;
	os << "Grade require to signed : " << f.getSigneIt() << std::endl;
	os << "Grade require to execut : " << f.getExeIt() << std::endl;
	if (f.isSignet() == false)
		os << "Status                  : not signed" << std::endl;
	else
		os << "Status                  : Signed\n";
	return os;
}
