# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hameur <hameur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 23:25:53 by hameur            #+#    #+#              #
#    Updated: 2023/01/31 23:35:58 by hameur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap


CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp ClapTrap.cpp 

OBJS = $(SRC:%.cpp=%.o)

all:	$(NAME)
	@echo "Meking complete"

$(NAME)	: $(OBJS) ClapTrap.hpp
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all