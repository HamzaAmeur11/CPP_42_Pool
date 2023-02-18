#include "Intern.hpp"

Intern::Intern(){
    tab[0] = "shrubbery creation";
    tab[1] = "robotomy request";
    tab[2] = "presidential pardon";
}

Intern::Intern(const Intern &other){
    (void)other;
    tab[0] = "shrubbery creation";
    tab[1] = "robotomy request";
    tab[2] = "presidential pardon";
}

Intern::~Intern(){ ; }

Intern &Intern::operator=(const Intern &other){
    (void)other;
    return *this;
}

int Intern::checkForm(const std::string &name)
{
    if (name != tab[0] && name != tab[1] && name != tab[2])
        throw WrongForm();
    if (name == tab[0])
        return 0;
    else if (name == tab[1])
        return 1;
    else if (name == tab[2])
        return 2;
    return 4;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target){
    AForm *form = NULL;
    int i = checkForm(name);
    switch (i)
    {
		case 0:
			form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << name << "\n";
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << name << "\n";
            break;
        case 2:
            std::cout << "Intern creates " << name << "\n";
            form = new PresidentialPardonForm(target);
            break;
        default:
            break;
    }
    return (form);
}