NAME := megaphone

SRC := megaphone.cpp

OBJS := $(SRC:%.cpp=%.o)

CC := clang++

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

