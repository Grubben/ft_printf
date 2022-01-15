RM			= rm -rf

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=1 -g


SRCS		= get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

NAME		= libft.a

$(NAME)		: all
				ar rs $(NAME) $(OBJS) $(OBJS_bonus)

all			: $(OBJS)

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) *.out* $(lib) *.gch

re			: fclean $(NAME)


.PHONY		: $(NAME) all bonus clean fclean re 
