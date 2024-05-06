NAME = btc

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

#-------------------------------------------------------------------BITCOIN_EXCHANGE

BITCOIN_EXCHANGE_DIR = BitcoinExchange

BITCOIN_EXCHANGE_CLASS = $(BITCOIN_EXCHANGE_DIR)
BITCOIN_EXCHANGE_SRCS_CLASS = $(addsuffix .cpp, $(BITCOIN_EXCHANGE_CLASS))

BITCOIN_EXCHANGE_SRCS = \
	$(BITCOIN_EXCHANGE_SRCS_CLASS) \

#-------------------------------------------------------------------DATE

DATE_DIR = Date

DATE_CLASS = $(DATE_DIR)
DATE_SRCS_CLASS = $(addsuffix .cpp, $(DATE_CLASS))

DATE_SRCS = \
	$(DATE_SRCS_CLASS) \

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(DATE_DIR)/, $(DATE_SRCS)) \
		$(addprefix $(BITCOIN_EXCHANGE_DIR)/, $(BITCOIN_EXCHANGE_SRCS)) \
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