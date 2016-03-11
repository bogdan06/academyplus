NAME = fillit.exe

SOURCE_FILES = \
	check1.c \
	check2.c \
	functional.c \
	main.c \
	place.c \
	write_functions.c

OBJECT_FILES = check1.o \
	check2.o \
	functional.o \
	main.o \
	place.o \
	write_functions.o

FLAGS = -Wall -Werror -Wextra

all:
	@gcc -c $(FLAGS) $(SOURCE_FILES)
	@gcc -o $(NAME) $(OBJECT_FILES)

clean:
	@rm -f $(OBJECT_FILES)

re: fclean all

fclean: clean
	@rm -f $(NAME)
