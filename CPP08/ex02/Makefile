NAME = Abomination

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

#-------------------------------------------------------------------SPAN

SPAN_DIR = Span

SPAN_CLASS = $(SPAN_DIR)
SPAN_SRCS_CLASS = $(addsuffix .cpp, $(SPAN_CLASS))

SPAN_SEARCH = \
	longestSpan \
	shortestSpan \
	get_number_closest_span \

SPAN_SEARCH_DIR = Search/
SPAN_SRCS_SEARCH = \
$(addprefix $(SPAN_SEARCH_DIR), $(addsuffix .cpp, $(SPAN_SEARCH)))

SPAN_REPRESENT = \
	represent_span \

SPAN_REPRESENT_DIR = Represent/
SPAN_SRCS_REPRESENT = \
$(addprefix $(SPAN_REPRESENT_DIR), $(addsuffix .cpp, $(SPAN_REPRESENT)))

SPAN_STORE_NUMBER = \
	addNumber \
	add_N_Numbers \

SPAN_STORE_NUMBER_DIR = Storenumbers/
SPAN_SRCS_STORE_NUMBER = \
$(addprefix $(SPAN_STORE_NUMBER_DIR), $(addsuffix .cpp, $(SPAN_STORE_NUMBER)))

SPAN_SRCS = \
	$(SPAN_SRCS_CLASS) \
	$(SPAN_SRCS_SEARCH) \
	$(SPAN_SRCS_STORE_NUMBER) \
	$(SPAN_SRCS_REPRESENT) \

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(SPAN_DIR)/, $(SPAN_SRCS)) \
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