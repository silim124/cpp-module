# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 20:13:20 by silim             #+#    #+#              #
#    Updated: 2022/01/30 20:13:21 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \

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
