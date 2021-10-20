##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile for do_op
##

SRC	=	sources/print/my_putstr.c	\
		sources/print/my_putchar.c	\
		sources/print/my_put_nbr.c	\
		sources/print/my_printf.c	\
		sources/print/my_put_unsigned.c	\
		sources/print/my_put_ulong.c	\
		sources/print/wrap_modulo.c	\
		sources/print/dtoo.c	\
		sources/print/dtob.c	\
		sources/print/dtoupperx.c	\
		sources/print/my_revstr.c	\
		sources/print/my_strlowcase.c	\
		sources/print/dtox.c	\
		sources/print/flag_stro.c	\
		sources/print/flag_p.c	\
		sources/man/check_arg.c	\
		sources/my/my_strcmp.c	\
		sources/my/my_strncmp.c	\
		sources/my/my_strcat.c	\
		sources/my/my_strcpy.c	\
		sources/my/my_strncpy.c	\
		sources/my/my_str_to_wa.c	\
		sources/my/my_getnbr.c	\
		sources/my/my_str_isnum.c	\
		sources/matchstick/matchstick.c	\
		sources/matchstick/create_map.c	\
		sources/matchstick/display_match.c	\
		sources/matchstick/entrance_msg.c	\
		sources/matchstick/remove_match.c	\
		sources/matchstick/ia_play.c	\
		sources/matchstick/game_info_player.c	\
		sources/matchstick/game_info_ia.c	\
		sources/matchstick/init_entrance.c	\
		sources/matchstick/check_match.c	\
		sources/matchstick/check_input.c	\
		sources/matchstick/check_line.c	\
		sources/main.c	\

OBJ	=	${SRC:%.c=%.o}

NAME	=	matchstick

CPPFLAGS=	-I ./includes

CFLAGS	=	-Wall -Wextra -W

CC	=	gcc

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ} -lncurses

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

debug:	CFLAGS += -g3
debug: re

.PHONY: all clean fclean re
