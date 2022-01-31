# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 21:55:34 by silim             #+#    #+#              #
#    Updated: 2022/01/31 21:55:35 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \
			Bird.cpp \

OBJS	=	$(SRCS:.c=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean	:
			$(RM) $(NAME)

re		:	fclean all
