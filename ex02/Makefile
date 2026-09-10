# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/29 17:20:34 by ivan              #+#    #+#              #
#    Updated: 2026/03/31 15:33:37 by ivan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###################################################
## ARGUMENTS

NAME = Bureaucrat_but_better

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98


###################################################
## SOURCES

SRC = main.cpp Bureaucrat.cpp AForm.cpp
OBJ = $(SRC:.cpp=.o)

###################################################
## RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

##################################################
## CLEAN

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all  clean fclean re