CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

RM = rm -rf

BETTY = betty $(SRC)

SRC = *.c

NAME = hsh



all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) *~ \#*\# \.\#* \
	$(NAME)

re:
	clean all
