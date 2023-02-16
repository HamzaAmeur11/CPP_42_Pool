#include "Intern.hpp"

Intern::Intern(){ ; }

Intern::Intern(const Intern &other){ (void)other; }

Intern::~Intern(){ ; }

Intern &Intern::operator=(const Intern &other){
    (void)other;
    return *this;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target){

    try{
        if (name == "PresidentialPardonForm"){
            std::cout << "Intern Create " << name << '\n';
            return new PresidentialPardonForm(target);
        }else if (name == "RobotomyRequestForm"){
            std::cout << "Intern Create " << name << '\n';
            return new RobotomyRequestForm(target);
        }else if (name == "ShrubberyCreationForm"){
            std::cout << "Intern Create " << name << '\n';
            return new ShrubberyCreationForm(target);
        }else
            throw WrongForm();
    }catch(const std::exception &ex){
           std::cerr << "Cloudn't Creat a form Because : " << ex.what() << "\n";
    }
    return (nullptr);
}