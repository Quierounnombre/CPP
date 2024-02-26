NAME = HACIENDA

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

#-------------------------------------------------------------------BUREAUCRAT

BUREAUCRAT_DIR = Bureaucrat

BUREAUCRAT_EXCEPTIONS = \
	GradeTooHighException \
	GradeTooLowException \

BUREAUCRAT_EXCEPTIONS_DIR = Exceptions/
BUREAUCRAT_SRCS_EXCEPTIONS = \
$(addprefix $(BUREAUCRAT_EXCEPTIONS_DIR), $(addsuffix .cpp, $(foreach wrd,$(BUREAUCRAT_EXCEPTIONS),$(wrd)/$(wrd))))

BUREAUCRAT_PAPERWORK = \
	signForm \

BUREAUCRAT_PAPERWORK_DIR = Paperwork/
BUREAUCRAT_SRCS_PAPERWORK = \
$(addprefix $(BUREAUCRAT_PAPERWORK_DIR), $(addsuffix .cpp, $(BUREAUCRAT_PAPERWORK)))

BUREAUCRAT_GRADES = \
	check_grade_change \
	decrementGrade \
	incrementGrade \

BUREAUCRAT_GRADES_DIR = Grades/
BUREAUCRAT_SRCS_GRADES = \
$(addprefix $(BUREAUCRAT_GRADES_DIR), $(addsuffix .cpp, $(BUREAUCRAT_GRADES)))

BUREAUCRAT_CLASS = Bureaucrat
BUREAUCRAT_SRCS_CLASS = \
$(addsuffix .cpp, $(foreach wrd,$(BUREAUCRAT_CLASS),$(wrd)))

BUREAUCRAT_SRCS =	\
	$(BUREAUCRAT_SRCS_EXCEPTIONS) \
	$(BUREAUCRAT_SRCS_GRADES) \
	$(BUREAUCRAT_SRCS_CLASS) \
	$(BUREAUCRAT_SRCS_PAPERWORK) \

#-------------------------------------------------------------------AFORM

AFORM_DIR = AForm

AFORM_STATUS = \
	beSigned \

AFORM_STATUS_DIR = Status/
AFORM_SRCS_STATUS = \
$(addprefix $(AFORM_STATUS_DIR), $(addsuffix .cpp, $(AFORM_STATUS)))

AFORM_CLASS = AForm
AFORM_SRCS_CLASS = $(addsuffix .cpp, $(foreach wrd,$(AFORM_CLASS),$(wrd)))

AFORM_SRCS =	\
	$(AFORM_SRCS_STATUS) \
	$(AFORM_SRCS_CLASS) \

#-------------------------------------------------------------------SHRUBERYCREATIONFORM

SHRUBBERYCREATIONFORM_DIR = ShrubberyCreationForm

SHRUBBERYCREATIONFORM_CLASS = ShrubberyCreationForm
SHRUBBERYCREATIONFORM_SRCS_CLASS = $(addsuffix .cpp, $(SHRUBBERYCREATIONFORM_CLASS))

SHRUBBERYCREATIONFORM_STATUS = \
	beSigned \

SHRUBBERYCREATIONFORM_STATUS_DIR = Status/
SHRUBBERYCREATIONFORM_SRCS_STATUS = \
$(addprefix $(SHRUBBERYCREATIONFORM_STATUS_DIR), $(addsuffix .cpp, $(SHRUBBERYCREATIONFORM_STATUS)))

SHRUBBERYCREATIONFORM_SRCS = \
	$(SHRUBBERYCREATIONFORM_SRCS_CLASS) \
	$(SHRUBBERYCREATIONFORM_SRCS_STATUS) \

#-------------------------------------------------------------------SRCS

SRCS =	\
		$(addprefix $(BUREAUCRAT_DIR)/, $(BUREAUCRAT_SRCS)) \
		$(addprefix $(AFORM_DIR)/, $(AFORM_SRCS)) \
		$(addprefix $(SHRUBBERYCREATIONFORM_DIR)/, $(SHRUBBERYCREATIONFORM_SRCS)) \
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