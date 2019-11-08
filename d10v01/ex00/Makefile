# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 12:26:54 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/04 12:27:02 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./srcs/
SRC = $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c \
	$(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_swap.c
INC_PATH = ./includes/
O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
GCCFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(GCCFLAG) -c -I$(INC_PATH) $(SRC)
	@ar rc $(NAME) $(O_FILES)
	@ranlib $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(O_FILES)

re: fclean all
