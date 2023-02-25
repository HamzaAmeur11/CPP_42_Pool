NAME = ex01

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = Span.hpp

SRC = main.cpp Span.cpp

OBJS = $(SRC:%.cpp=%.o)

all:	$(NAME) $(HEADERS)
	@echo "Meking complete"

$(NAME)	: $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
