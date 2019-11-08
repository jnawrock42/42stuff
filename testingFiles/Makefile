NAME = libtest.a
HEADER = testHeader.h
SRC_PATH = ./
SRC = \
	$(SRC_PATH)ft_putchar.c \
	$(SRC_PATH)ft_putstr.c \
	$(SRC_PATH)ft_strlen.c \
	$(SRC_PATH)ft_putnbr.c
O_FILES = \
	ft_putchar.o \
	ft_putstr.o \
	ft_strlen.o \
	ft_putnbr.o
GCCFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(GCCFLAG) -c -I$(HEADER) $(SRC)
	ar rc $(NAME) $(SRC) $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(O_FILES)

re: fclean all






#
#
#test: fclean all
#	./$(EXE_NAME)
#	/bin/rm -f $(O_FILES)
#	/bin/rm -f $(EXE_NAME)
#	norminette
#
#
#
#
#
#
