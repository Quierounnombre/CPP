NAME = Paginas_amarillas

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

BLACK = \033[0;30m
RED =   \033[0;31m
GREEN = \033[0;32m
YELLOW =    \033[0;33m
BLUE  = \033[0;34m
MAGENTA =   \033[0;35m
CYAN =  \033[0;36m
LGRAY = \033[0;37m
DGRAY = \033[1;30m
LBLUE = \033[1;34m
LGREEN = \033[1;32m
LCYAN = \033[1;36m
LRED = \033[1;31m
LMAGENTA =\033[1;35m
LYELLOW = \033[1;33m
WHITE = \033[1;37m
RESET = \033[0m

CLASS =	PhoneBook \
		Contact

FILES = $(foreach wrd,$(CLASS),$(addprefix $(wrd)/,$(shell cat $(wrd)/$(wrd).hpp | grep '(*)' | xargs | sed 's/&//g' | xargs | grep '(*)' | tr -s " " "\012" | tr -s "\050" "&" | grep "&" | sed 's/&/ /g' | tr -s "\051" "&" | sed 's/;//g' | sed 's/const//g' | awk 'NR>3 {printf $$1"\n"}')))

SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

MAIN = main

SRCS =	$(SRC) \
		$(foreach wrd,$(CLASS), $(wrd)/$(wrd).cpp) \
		$(addsuffix .cpp, $(MAIN))
OBJS =	$(OBJ) \
		$(foreach wrd,$(CLASS), $(wrd)/$(wrd).o) \
		$(addsuffix .o, $(MAIN))

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)\n$(NAME) compile\n$(RESET)" 

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)\nFiles .o cleaned\n$(RESET)"

fclean: clean
	@$(RM) $(NAME) 
	@echo "$(RED)\n$(NAME) cleaned\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re

.SILENT: