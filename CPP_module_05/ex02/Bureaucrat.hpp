#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const Name;
		int Grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat(std::string, int);
		~Bureaucrat();
		Bureaucrat			&operator=(Bureaucrat const &);
		std::string const	getName() const;
		int					getGrade() const;
		void				setGrade(int const &);
		void				increment();
		void				decrement();
		void				signForm(AForm&);
		void				executeForm(AForm const&) const;
		class GradeTooHighException : public std::exception{
			public:
				const char *what()const throw(){
					return "Grade To High : Max Grade 1";
				};
		};

		class GradeTooLowException : public std::exception{
			public:
				const char *what()const throw(){
					return "Grade To Low : Min Grade 150";
				};
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& c);
