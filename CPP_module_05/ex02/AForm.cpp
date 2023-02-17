#include "AForm.hpp"

AForm::AForm() : Name("FormName"), SignIt(1), ExeIt(1) { this->si = false; }

AForm::AForm(const std::string &s, bool si, const int &signit, const int &exeit) : Name(s), si(si), SignIt(signit), ExeIt(exeit)
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

AForm::AForm(const AForm &other) : Name(other.Name), SignIt(other.SignIt), ExeIt(other.ExeIt)
{
	*this = other;
}

AForm::~AForm() { ; }

AForm &AForm::operator=(const AForm &other)
{
	Signed(other.si);
	return *this;
};

const std::string &AForm::getName() const
{
	return this->Name;
}

int AForm::getSigneIt() const
{
	return this->SignIt;
}
int AForm::getExeIt() const
{
	return this->ExeIt;
}
bool AForm::isSignet() const
{
	return this->si;
}
void AForm::beSigned(Bureaucrat &b)
{
	// try
	// {
		if (b.getGrade() > SignIt)
			throw GradeTooLowException();
		else
			si = true;
	// }
	// catch (const std::exception &ex)
	// {
	// 	std::cerr << ex.what() << std::endl;
	// 	;
	// }
}

void AForm::Signed(bool s)
{
	this->si = s;
}

std::ostream &operator<<(std::ostream &os, AForm &f)
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
