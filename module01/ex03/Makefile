# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 22:16:46 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:20 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
