# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 01:59:06 by hmeur             #+#    #+#              #
#    Updated: 2023/01/12 02:02:07 by hmeur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

SRC := megaphone.cpp

OBJS := $(SRC:%.cpp=%.o)

CC := g++

CPPFLAGS := -Wall -Werror -Wextra  -std=c++98

all:	$(NAME)
		@echo "Meking Megaphone"

$(NAME)	: $(OBJS)
		@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@echo "Removing Megaphone Program"
	@rm -rf $(NAME)

re: fclean $(NAME)

