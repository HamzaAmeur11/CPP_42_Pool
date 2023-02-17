#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", false, 145, 137){
	this->target = "Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm(other.getName(), false, 145, 137){
	*this = other;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", false, 145, 137){
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { ; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
	this->target = other.target;
	AForm::operator=(other);
	return *this;
}

std::string const &ShrubberyCreationForm::getTarget(){
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bur) const{
	bur.executeForm(*this);
	if (bur.getGrade() > 0 && bur.getGrade() <= this->getExeIt() && this->isSignet()){
		std::ofstream outfile(target + "_Shrubbery");
		outfile <<
		"                                    .\n"
		"                                      .         ;\n"
		"         .              .              ;%     ;; \n"
		"           ,           ,                :;%  %;   \n"
		"            :         ;                   :;%;'     .,   \n"
		"   ,.        %;     %;            ;        %;'    ,;\n"
		"     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
		"      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
		"       ;%;      %;        ;%;        % ;%;  ,%;'\n"
		"        `%;.     ;%;     %;'         `;%%;.%;'\n"
		"         `:;%.    ;%%. %@;        %; ;@%;%'\n"
		"            `:%;.  :;SM%;          %;@%;'\n"
		"              `@%:.  :;%.         ;@@%;'  \n"
		"                `@%.  `;@%.      ;@@%;    \n"
		"                  `@%%. `@%%    ;@@%;     \n"
		"                    ;@%. :@%%  %@@%;      \n"
		"                      %@SM%%%SM%%:;     \n"
		"                        #@%%%%%:;;\n"
		"                        %@@%%%::;\n"
		"                        %@@@%(o);  . '    \n"
		"                        %@@@o%;:(.,'     \n"
		"                    `.. %@@@o%::;       \n"
		"                       `)@@@o%::;       \n"
		"                        %@@(o)::;       \n"
		"                       .%@@@@%::;        \n"
		"                       ;%@@@@%::;.       \n"
		"                      ;%@@@@%%:;;;. \n"
		"                  ...;%@@@@@%%:;;;;,.."<< std::endl;
	}
}
