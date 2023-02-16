NAME = exec02

CC = c++

CPPFLAGS = -Wall -Werror -Wextra

CPPVERSION = -std=c++98

HEADERS = Bureaucrat.hpp \
			AForm.hpp \
			PresidentialPardonForm.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			Intern.hpp

SRC = main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

OBJS = $(SRC:%.cpp=%.o)

all:	$(NAME) $(HEADERS)
	@echo "Meking complete"

$(NAME)	: $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPVERSION) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) $(CPPFLAGS) $(CPPVERSION) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
