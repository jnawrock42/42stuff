# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 23:15:20 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/04 23:16:45 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXEC_NAME = do-op
SRC_PATH = ./
SRC = $(SRC_PATH)ft_atoi.c \
	$(SRC_PATH)ft_input_validator.c \
	$(SRC_PATH)ft_operator.c \
	$(SRC_PATH)ft_putchar.c \
	$(SRC_PATH)ft_putnbr.c \
	$(SRC_PATH)ft_putstr.c \
	$(SRC_PATH)ft_strlen.c \
	$(SRC_PATH)main.c
INC_PATH = ./
O_FILES = ft_putchar.o \
	ft_putstr.o \
	ft_putnbr.o \
	ft_atoi.o \
	ft_operator.o \
	ft_do-op.o
GCCFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(GCCFLAG) -o $(EXEC_NAME) -c -I$(INC_PATH) $(SRC)
	@ar rc $(NAME) $(SRC) $(O_FILES)
	@ranlib $(NAME)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(EXEC_NAME)

clean:
	/bin/rm -f $(O_FILES)

re: fclean all
