SRC_DIR = ./srcs/
HEAD_DIR = ./includes/
SRCS = ${SRC_DIR}main.c\
				${SRC_DIR}ft_display_file.c\


HEAD = ${HEAD_DIR}ft_display_file.h
OBJS = ${SRCS:.c=.o}
NAME = ft_display_file
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

.c.o: 
			${CC} ${CFLAGS} -I${HEAD_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		      ${CC}	-o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re