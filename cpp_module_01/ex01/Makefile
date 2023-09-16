NAME = Moar_brainz!

SRC = main.cpp Zombie.cpp zombieHorde.cpp

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

debug: FLAGS += -g
debug: re

