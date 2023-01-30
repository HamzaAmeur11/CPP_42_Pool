# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hameur <hameur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 22:49:16 by hameur            #+#    #+#              #
#    Updated: 2023/01/29 22:51:48 by hameur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed1

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Fixed.cpp

OBJS = $(SRC:%.cpp=%.o)

all:	$(NAME)
	@echo "Meking complete"

$(NAME)	: $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all