NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror -O3

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

HDDIRS=-I includes/

SRC= ft_power.c ft_strjoin.c ft_abs.c ft_putchar.c \
ft_strlcat.c ft_atoi.c ft_putchar_fd.c \
ft_strlen.c ft_bzero.c ft_putendl.c ft_strmap.c \
ft_isalnum.c ft_putendl_fd.c ft_strmapi.c \
ft_isalpha.c ft_putnbr.c ft_strncat.c ft_isascii.c \
ft_putnbr_fd.c ft_strncmp.c ft_isdigit.c \
ft_putstr.c ft_strncpy.c ft_isprint.c ft_str_isdigit.c \
ft_strnequ.c ft_itoa.c ft_str_isint.c \
ft_strnew.c ft_memalloc.c ft_strcat.c ft_strnstr.c \
ft_memccpy.c ft_strchr.c ft_strrchr.c ft_memchr.c \
ft_strclr.c ft_strsplit.c ft_memcmp.c ft_strcmp.c \
ft_strstr.c ft_memcpy.c ft_strcpy.c ft_strsub.c \
ft_memdel.c ft_strdel.c ft_strtrim.c ft_memmove.c \
ft_strdup.c ft_tolower.c ft_memset.c ft_strequ.c \
ft_toupper.c ft_min.c ft_striter.c ft_nbrlen.c ft_striteri.c

OBJ=$(SRC:.c=.o)

$(NAME): includes/libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re