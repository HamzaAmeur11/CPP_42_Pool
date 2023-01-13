# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 01:59:27 by hmeur             #+#    #+#              #
#    Updated: 2023/01/13 15:36:40 by hmeur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phone_book

SRC :=	main.cpp \
		Phone_book.cpp \

OBJS := $(SRC:%.cpp=%.o)

CC := g++

CPPFLAGS := -Wall -Werror -Wextra  -std=c++98

all:	$(NAME)
	@echo "Meking Phone_Book"

$(NAME)	: $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)
