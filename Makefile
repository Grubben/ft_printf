RM			= rm -rf

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=1 -g


SRCS		= get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

$(NAME)		: all libft.a
				ar rcs $(NAME) $(OBJS) $(OBJS_bonus)
				ranlib $(NAME)

libft.a		:
				$(MAKE) -C libft libft.a
				cp libft/libft.a .
				cp libft/libft.h .

all			: $(OBJS)

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) *.out* $(NAME) *.gch
				$(RM) *.a libft.h

re			: fclean $(NAME)


.PHONY		: $(NAME) all bonus clean fclean re libft.a
