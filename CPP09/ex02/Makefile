NAME = PmergeMe

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -Wpedantic
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

#-------------------------------------------------------------------PMERGEME

PMERGEME_DIR = .

PMERGEME_CLASS = PmergeMe
PMERGEME_SRCS_CLASS = $(addsuffix .cpp, $(PMERGEME_CLASS))

PMERGEME_MERGE = \
split_lst_in_half \
order_lst_pairs \
create_bigger_elements_lst \

PMERGEME_MERGE_DIR = Merge/
PMERGEME_MERGE_SRCS = \
$(addprefix $(PMERGEME_MERGE_DIR), $(addsuffix .cpp, $(PMERGEME_MERGE)))

PMERGEME_SRCS = \
	$(PMERGEME_SRCS_CLASS) \
	$(PMERGEME_MERGE_SRCS)

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(PMERGEME_DIR)/, $(PMERGEME_SRCS)) \
		$(addsuffix .cpp, $(MAIN)) \

#-------------------------------------------------------------------RULES

OBJS =	${SRCS:.cpp=.o}

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(DEFINES) -o $(NAME) $(OBJS)
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