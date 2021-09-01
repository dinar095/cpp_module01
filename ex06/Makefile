NAME = karenFilter
HEADER = Karen.hpp
FUNCTIONS = main Karen

CC = clang++
CFLAGS = -Wall -Wextra -Werror

OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.cpp,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

obj_f: $(SRC)
	$(CC) CFLAGS = -Wall -Wextra -Werror -c $(SRC)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(SRC) -std=c++98 -pedantic -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re