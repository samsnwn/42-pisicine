# -*- MakeFile -*-

SRC_DIR = ./srcs/
HEAD_DIR = ./includes/
SRCS = ${SRC_DIR}main.c\
		${SRC_DIR}ft_cat.c\
		${SRC_DIR}ft_strlen.c\
		${SRC_DIR}write_error.c\


HEAD = ${HEAD_DIR}ft_cat.h
OBJS = ${SRCS:.c=.o}
NAME = ft_cat
CC = cc
RM = rm -f rm file3.txt
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