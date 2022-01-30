# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 16:17:34 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:33 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \
			Fixed.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
