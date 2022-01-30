# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 18:23:55 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:19 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \
			Zombie.cpp \
			ZombieHorde.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
