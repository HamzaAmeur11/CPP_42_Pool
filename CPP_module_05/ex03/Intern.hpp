#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    private:
        std::string tab[3];
    public:
        Intern();
        Intern(const Intern &);
        ~Intern();
        Intern &operator=(const Intern &);
        AForm *makeForm(const std::string&, const std::string&);
        int checkForm(const std::string &);
        class WrongForm : public std::exception{
            public:
                const char *what()const throw(){
                    return "Wrong Form";
                }
        };
};
