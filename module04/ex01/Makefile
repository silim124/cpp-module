NAME	=	ex01

SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \

OBJS	=	$(SRCS:.c=.o)

CXX = clang++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werrorng++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror



RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean	:
			$(RM) $(NAME)

re		:	fclean all
