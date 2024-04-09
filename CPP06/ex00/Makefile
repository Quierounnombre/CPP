NAME = convert

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

#-------------------------------------------------------------------SCALARCONVERTER

SCALARCONVERTER_DIR = ScalarConverter

SCALARCONVERTER_CLASS = $(SCALARCONVERTER_DIR)
SCALARCONVERTER_SRCS_CLASS = $(addsuffix .cpp, $(SCALARCONVERTER_CLASS))

SCALARCONVERTER_PARSE = \
	check_bad_string \
	check_dup_chars \
	check_multiple_chars \
	check_named_exceptions \
	check_string \
	check_illegal_chars \
	check_overflow \

SCALARCONVERTER_PARSE_DIR = Parse/
SCALARCONVERTER_SRCS_PARSE = \
$(addprefix $(SCALARCONVERTER_PARSE_DIR), $(addsuffix .cpp, $(SCALARCONVERTER_PARSE)))

SCALARCONVERTER_ERROR_MANAGMENT = \
	error_mng \


SCALARCONVERTER_ERROR_MANAGMENT_DIR = Error_managment/
SCALARCONVERTER_SRCS_ERROR_MANAGMENT = \
$(addprefix $(SCALARCONVERTER_ERROR_MANAGMENT_DIR), $(addsuffix .cpp, $(SCALARCONVERTER_ERROR_MANAGMENT)))

SCALARCONVERTER_CONVERSIONS = \
	convert_exceptions \
	convert_char \
	convert_float \
	convert_double \
	convert_int \
	getDataType \

SCALARCONVERTER_CONVERSIONS_DIR = Conversions/
SCALARCONVERTER_SRCS_CONVERSIONS = \
$(addprefix $(SCALARCONVERTER_CONVERSIONS_DIR), $(addsuffix .cpp, $(SCALARCONVERTER_CONVERSIONS)))

SCALARCONVERTER_SRCS = \
	$(SCALARCONVERTER_SRCS_CLASS) \
	$(SCALARCONVERTER_SRCS_PARSE) \
	$(SCALARCONVERTER_SRCS_ERROR_MANAGMENT) \
	$(SCALARCONVERTER_SRCS_CONVERSIONS) \

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(SCALARCONVERTER_DIR)/, $(SCALARCONVERTER_SRCS)) \
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