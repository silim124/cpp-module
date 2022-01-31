# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 21:54:44 by silim             #+#    #+#              #
#    Updated: 2022/01/31 21:54:45 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \

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
