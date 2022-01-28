NAME	=	ex03

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp \

OBJS	=	$(SRCS:.c=.o)

CXX = clang++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror



RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
fclean	:
			$(RM) $(NAME)

re		:	fclean all
