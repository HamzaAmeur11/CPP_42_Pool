#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Bureaucrat"), Grade(150) { ; }

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : Name(ref.getName())
{
	try
	{
		if (ref.getGrade() <= 0)
			throw GradeTooHighException();
		else if (ref.getGrade() > 151)
		{//na999iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
			throw GradeTooLowException();
			setGrade(150);
		}
		else
			setGrade(ref.getGrade());
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
	try
	{
		if (grade <= 0)
		{
			throw GradeTooHighException();
			setGrade(1);
		}
		else if (grade > 151)
		{
			throw GradeTooLowException();
			setGrade(150);
		}
		else
			setGrade(grade);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() { ; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{

	try
	{
		if (other.getGrade() <= 0)
		{
			throw GradeTooHighException();
			setGrade(1);
		}
		else if (other.getGrade() > 151)
		{
			throw GradeTooLowException();
			setGrade(150);
		}
		else
			this->Grade = other.Grade;
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
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

void Bureaucrat::increment()
{
	try
	{
		if (Grade == 1)
			throw GradeTooHighException();
		else
			Grade--;
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}

void Bureaucrat::decrement()
{
	try
	{
		if (Grade == 150)
			throw GradeTooLowException();
		else
			Grade++;
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		if (this->getGrade() < 1){
			throw AForm::GradeTooHighException();
		}else if (this->getGrade() < f.getSigneIt())
		{
			std::cout << this->getName() << " Signed " << f.getName() << std::endl;
			f.Signed(true);
		}
		else
			throw AForm::GradeTooLowException();
	}
	catch (const std::exception &ex)
	{
		std::cerr << this->getName() << " couldn’t signe " << f.getName();
		std::cerr << " Because " << ex.what() << '\n';
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try{
		if (this->getGrade() > form.getExeIt())
			throw AForm::GradeTooLowException();
		else if (!form.isSignet())
			throw AForm::NotSignedException();
		else if (this->getGrade() < 1)
			throw AForm::GradeTooHighException();
		else
			std::cout << this->getName() << " Executed " << form.getName() << '\n';

	}catch(std::exception &ex){
		std::cerr << this->getName() << " couldn't executed ";
		std::cerr << form.getName() <<  " because :" << ex.what() << "\n";
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade" << b.getGrade();
	return (out);
}
