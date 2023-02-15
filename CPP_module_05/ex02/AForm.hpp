#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string Name;
	bool si;
	const int SignIt;
	const int ExeIt;

public:
	AForm();
	AForm(const std::string &, bool, const int &, const int &);
	AForm(const AForm &);
	virtual ~AForm();
	AForm &operator=(const AForm &);
	const std::string &getName();
	int getSigneIt();
	int getExeIt();
	bool isSignet();
	void Signed(bool);
	void beSigned(Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() { ; };
		const char *what() const throw()
		{
			return "Form :Grade To High";
		};
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() { ; };
		const char *what() const throw()
		{
			return "Form :Grade To Low";
		};
	};

	class NotSignedException : public std::exception
	{
		public:
			NotSignedException(){ ; };
			const char *what () const throw(){
				return "Form Not Signed";
			}
	};

	virtual void execute(Bureaucrat const &) const = 0;
};
std::ostream &operator<<(std::ostream &, const AForm &);
