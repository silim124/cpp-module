# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 21:56:50 by silim             #+#    #+#              #
#    Updated: 2022/01/31 21:56:51 by silim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

SRCS	=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \

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
