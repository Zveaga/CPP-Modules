# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: coxer <coxer@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/31 15:14:30 by coxer         #+#    #+#                  #
#    Updated: 2024/05/22 17:20:11 by coxer         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN = \033[32;01m
RED = \033[31;01m
BLUE = \033[34;01m
RESET = \033[0m
YELLOW = \033[33;01m

NAME = array

SRC = \
main.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++20

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Program built successfully! $(RESET)\n"

%.o: %.cpp
	@$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re