# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 18:23:28 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:19 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	tests.cpp \
			Account.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) -I. -o $(NAME) $(OBJS)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
