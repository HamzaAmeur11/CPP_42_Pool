#include "Intern.hpp"

Intern::Intern(){
    tab[0] = "ShrubberyCreationForm";
    tab[1] = "RobotomyRequestForm";
    tab[2] = "PresidentialPardonForm";
}

Intern::Intern(const Intern &other){
    (void)other;
    tab[0] = "ShrubberyCreationForm";
    tab[1] = "RobotomyRequestForm";
    tab[2] = "PresidentialPardonForm";
}

Intern::~Intern(){ ; }

Intern &Intern::operator=(const Intern &other){
    (void)other;
    return *this;
}

int Intern::checkForm(const std::string &name){
    if (name == tab[0])
        return 0;
    else if (name == tab[1])
        return 1;
    else if (name == tab[2])
        return 2;    
    return-1;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target){
    AForm *form = nullptr;;
     try{
        int i = checkForm(name);
        switch (i)
        {
        case 0:
            form = new ShrubberyCreationForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            break;
        default:
            throw WrongForm();
            break;
        }
    }catch(const std::exception &ex){
           std::cerr << "Cloudn't Creat a form Because : " << ex.what() << "\n";
    }
    return (form);
}