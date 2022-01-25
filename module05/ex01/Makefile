NAME	=	ex01

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \

OBJS	=	$(SRCS:.c=.o)

CC		=	c++

FLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

fclean	:
			$(RM) $(NAME)

re		:	fclean all
