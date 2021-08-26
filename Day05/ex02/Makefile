#-Wall -Wextra -Werror
NAME = form

CC = clang++
FLAGS = -std=c++98 -MMD -Wall -Wextra -Werror
DIR_S =	./
DIR_O =	./obj
SOURCES	= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

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
	./$(NAME)
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