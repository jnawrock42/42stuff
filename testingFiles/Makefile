NAME = libtest.a
SRC_PATH = ./
SRC = $(SRC_PATH)ft_putchar.c \
	$(SRC_PATH)ft_putstr.c \
	$(SRC_PATH)ft_putnbr.c
HEADER = testHeader.h
O_FILES = ft_putchar.o \
	ft_putstr.o \
	ft_putnbr.o
GCCFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(GCCFLAG) -c -I$(HEADER) $(SRC)
	ar rc $(NAME) $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(O_FILES)

re: fclean all