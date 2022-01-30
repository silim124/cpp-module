# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 16:18:18 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:22 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \
			Fixed.cpp \
			Point.cpp \
			bsp.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
