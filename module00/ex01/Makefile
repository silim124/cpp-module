# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 18:23:55 by silim             #+#    #+#              #
#    Updated: 2022/01/30 18:37:18 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	=	main.cpp \
			Phonebook.cpp \
			Contact.cpp \

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) -I. -o $(NAME) $(OBJS)

fclean:
		rm -f $(NAME)

re	:	fclean all

.PHONY:	clean fclean re
