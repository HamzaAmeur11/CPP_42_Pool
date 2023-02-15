#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm(std::string const&);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const&);
		std::string const &getTarget();
		void execute(Bureaucrat const&) const;
};
