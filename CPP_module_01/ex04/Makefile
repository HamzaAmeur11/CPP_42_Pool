# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hameur <hameur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 15:08:30 by hmeur             #+#    #+#              #
#    Updated: 2023/01/24 17:00:25 by hameur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

CC = g++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \

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
