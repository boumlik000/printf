# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 21:18:03 by mboumlik          #+#    #+#              #
#    Updated: 2023/12/11 21:18:11 by mboumlik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
CC = cc
CFLAGS = -Wall -Wextra  -Werror 
AR = ar -rc

SRC = 


             
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME) 

re: fclean all