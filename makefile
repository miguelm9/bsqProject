SRCS	= main.c check_file_validity.c check_lines.c map_creator.c get_lines_and_chars.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re