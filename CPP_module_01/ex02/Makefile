# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 13:58:43 by hmeur             #+#    #+#              #
#    Updated: 2023/01/19 14:10:17 by hmeur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = THIS_IS_BRAIN

CC = g++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \

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

re: fclean all
