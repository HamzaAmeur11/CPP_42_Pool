#pragma once

#include <iostream>
#include <string>

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

		class GradeTooHighException : public std::exception{
			public:
				GradeTooHighException(){ ; };
				const char *what()const throw(){
					return "Grade To High : Max Grade 1";
				};
		};

		class GradeTooLowException : public std::exception{
			public:
				GradeTooLowException(){ ; };
				const char *what()const throw(){
					return "Grade To Low : Min Grade 150";
				};
		};
};
