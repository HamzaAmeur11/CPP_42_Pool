#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm(std::string const&);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const&);
		std::string const &getTarget();
		void execute(Bureaucrat const&) const;
};
