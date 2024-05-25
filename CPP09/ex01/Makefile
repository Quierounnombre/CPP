NAME = RPN

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror
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

#-------------------------------------------------------------------RPN

RPN_DIR = RPN_

RPN_CLASS = RPN
RPN_SRCS_CLASS = $(addsuffix .cpp, $(RPN_CLASS))

RPN_PARSE = \
check_allowed_chars \
check_char_space_char_rule \
check_string_validity \
check_string \


RPN_PARSE_DIR = Parse/
RPN_PARSE_SRCS = \
$(addprefix $(RPN_PARSE_DIR), $(addsuffix .cpp, $(RPN_PARSE)))

RPN_CALCULATE = \
calculate \
do_addition \
do_division \
do_multiplication \
do_substraction \
select_operation \

RPN_CALCULATE_DIR = Calculate/
RPN_CALCULATE_SRCS = \
$(addprefix $(RPN_CALCULATE_DIR), $(addsuffix .cpp, $(RPN_CALCULATE)))

RPN_SRCS = \
	$(RPN_SRCS_CLASS) \
	$(RPN_CALCULATE_SRCS) \
	$(RPN_PARSE_SRCS)

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(RPN_DIR)/, $(RPN_SRCS)) \
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