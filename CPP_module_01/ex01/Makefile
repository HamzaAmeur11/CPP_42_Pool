# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 13:28:08 by hmeur             #+#    #+#              #
#    Updated: 2023/01/19 15:10:10 by hmeur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

CC = g++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		zombieHorde.cpp \
		Zombie.cpp \

OBJS = $(SRC:%.cpp=%.o)

all:	$(NAME)
		@echo "Meking complete"

$(NAME)	: $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

