##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC = gcc

L = lib/

S = src/

SRC =	$(S)directions.c \
		$(S)speed.c \
		$(S)loop.c \

LIB = 	$(L)my_str_to_word_array.c 	\
		$(L)my_strcmp.c  		\
		$(L)my_strcpy.c  		\
		$(L)my_strdup.c  		\
		$(L)my_atof.c  			\
		$(L)my_strlen.c  		\
		$(L)my_strcat.c  		\
		$(L)my_putstr.c 		\
		$(L)my_getnbr.c 		\
		$(L)my_putchar.c 		\
		$(L)my_putfloat.c 		\

SRC_MAIN = src/main.c

OBJ = $(SRC:.c=.o)

OBJ_LIB = $(LIB:.c=.o)

OBJ_MAIN = $(SRC_MAIN:.c=.o)

CFLAGS = -Wall -Wextra -pedantic

CPPFLAGS = -I./include

RM	=	rm -f

NAME = ai

all: $(NAME)

debug: CFLAGS += -g3
debug: re

$(NAME): compiling $(OBJ) $(OBJ_MAIN) $(OBJ_LIB)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(OBJ_LIB)
	@	tput setaf 2
	@echo 'C`est tout bon chef !!'
	@	tput sgr0

compiling:
	@	tput setaf 3
	@echo 'je compile'
	@	tput sgr0

clean: cleaning
	$(RM) $(OBJ) $(OBJ_MAIN) $(OBJ_LIB)

fclean: clean
	$(RM) $(NAME)

cleaning:
	@	tput setaf 1
	@echo 'hop hop hop menage'
	@	tput sgr0

re: fclean all

.PHONY: all clean fclean re
