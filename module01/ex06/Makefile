NAME = ex06

FLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.cpp \
			Karen.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			c++ $(FLAGS) -I. -o $(NAME) $(OBJS)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
