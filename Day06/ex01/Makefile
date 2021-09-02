#-Wall -Wextra -Werror
NAME = serialization

CC = clang++
FLAGS = -std=c++98 -MMD -Wall -Wextra -Werror
DIR_S =	./
DIR_O =	./obj
SOURCES	= main.cpp

SRCS = $(addprefix $(DIR_S)/,${SOURCES})
OBJS = $(addprefix $(DIR_O)/,${SOURCES:.cpp=.o})

all: dir $(NAME)

dir:
	@echo "\033[0;32m"
	@if [ ! -d "obj" ]; then mkdir obj; fi

$(DIR_O)/%.o: $(DIR_S)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@ -g

$(NAME): $(OBJS)
	@echo "\033[0;35m"
	$(CC) $(FLAGS) $^ -o $@
	chmod 777 $(NAME)

test: $(NAME)
	@echo "\033[0;36m-<======EXE======>\033[m"
	./$(NAME) 0
	@echo "\033[0;36m-<===============>\033[m"
	./$(NAME) nan
	@echo "\033[0;36m-<===============>\033[m"
	./$(NAME) 42.0f
	@echo "\033[0;36m-<===============>\033[m"
	./$(NAME) 96.0
	@echo "\033[0;36m-<===============>\033[m"
	./$(NAME) 124567890120321
	@echo "\033[0;36m-<===============>\033[m"

clean:
	@echo "\033[0;33m"
	rm -rf $(DIR_O)

fclean: clean
	@echo "\033[0;33m"
	rm -f $(NAME)

re: fclean all

.PHONY: all lib clean fclean re

-include $(OBJS:.o=.d)