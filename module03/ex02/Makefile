NAME	=	Game

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \

OBJS	=	$(SRCS:.c=.o)

CXX = clang++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
fclean	:
			$(RM) $(NAME)

re		:	fclean all
