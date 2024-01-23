GREEN = \033[32;01m
RED = \033[31;01m
BLUE = \033[34;01m
RESET = \033[0m
YELLOW = \033[33;01m

NAME = phonebook

SRC = \
PhoneBook.cpp \
Contact.cpp \

OBJ = $(SRC:.cpp=.o)

CC = g++ -std=c++98

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Program built successfully! $(RESET)\n"

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re