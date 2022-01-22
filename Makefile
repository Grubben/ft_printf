RM			= rm -rf

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=1 -g


SRCS		= get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

$(NAME)		: all libft.a
				ar rs $(NAME) $(OBJS) $(OBJS_bonus)

libft.a		:
				$(MAKE) -C libft libft.a
				mv libft/libft.a .
				mv libft/libft.h .

all			: $(OBJS)

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) *.out* $(lib) *.gch

re			: fclean $(NAME)


.PHONY		: $(NAME) all bonus clean fclean re 
