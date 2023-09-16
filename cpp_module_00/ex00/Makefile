NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@c++ $(FLAGS) -o $(NAME) $(SRC)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all


