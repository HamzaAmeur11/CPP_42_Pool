#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string Name;
	bool si;
	const int SignIt;
	const int ExeIt;

public:
	Form();
	Form(const std::string &, bool, const int &, const int &);
	Form(const Form &);
	~Form();
	Form &operator=(const Form &);
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
};

std::ostream &operator<<(std::ostream &, Form &);
