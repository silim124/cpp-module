# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 18:09:32 by silim             #+#    #+#              #
#    Updated: 2022/01/28 18:09:32 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

CXX = clang++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
