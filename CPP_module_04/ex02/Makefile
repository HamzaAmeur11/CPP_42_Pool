# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 00:10:41 by hmeur             #+#    #+#              #
#    Updated: 2023/02/07 01:27:05 by hmeur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec02

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

SRC =	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

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
