# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 00:30:54 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:18 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) -I. -o $(NAME) $(OBJS)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
