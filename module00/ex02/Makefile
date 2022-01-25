# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 18:23:28 by silim             #+#    #+#              #
#    Updated: 2022/01/25 23:44:28 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

FLAGS	=	-Wall -Wextra -Werror

SRCS	=	tests.cpp \
			Account.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			clang++ -std=c++98 $(FLAGS) -I. -o $(NAME) $(OBJS)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
