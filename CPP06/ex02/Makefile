NAME = Identify

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
DEFINES = -D RUN_TEST=0


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

MAIN = main


#-------------------------------------------------------------------BASE

BASE_DIR = Base

BASE_CLASS = $(BASE_DIR)
BASE_SRCS_CLASS = $(addsuffix .cpp, $(BASE_CLASS))

BASE_SRCS = \
	$(BASE_SRCS_CLASS) \

#-------------------------------------------------------------------A

A_DIR = A

A_CLASS = $(A_DIR)
A_SRCS_CLASS = $(addsuffix .cpp, $(A_CLASS))

A_SRCS = \
	$(A_SRCS_CLASS) \

#-------------------------------------------------------------------B

B_DIR = B

B_CLASS = $(B_DIR)
B_SRCS_CLASS = $(addsuffix .cpp, $(B_CLASS))

B_SRCS = \
	$(B_SRCS_CLASS) \

#-------------------------------------------------------------------C

C_DIR = C

C_CLASS = $(C_DIR)
C_SRCS_CLASS = $(addsuffix .cpp, $(C_CLASS))

C_SRCS = \
	$(C_SRCS_CLASS) \


#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(BASE_DIR)/, $(BASE_SRCS)) \
		$(addprefix $(C_DIR)/, $(C_SRCS)) \
		$(addprefix $(B_DIR)/, $(B_SRCS)) \
		$(addprefix $(A_DIR)/, $(A_SRCS)) \
		$(addsuffix .cpp, $(MAIN)) \

#-------------------------------------------------------------------RULES

OBJS =	${SRCS:.cpp=.o}

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(DEFINES) -o $(NAME) $(OBJS)
	@echo "$(GREEN)\n$(NAME) compile\n$(RESET)" 

all: $(NAME)

clean: $(CLASS)
	@$(RM) $(OBJS)
	@echo "$(YELLOW)\nFiles .o cleaned\n$(RESET)"

fclean: clean
	@$(RM) $(NAME) 
	@echo "$(RED)\n$(NAME) cleaned\n$(RESET)"

re: fclean all


.PHONY: all clean fclean re test

.SILENT: