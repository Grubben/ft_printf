CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=1 -g
RM			= rm -rf


SUBDIRS		= libft

SRCS		= $(wildcard *.c)
OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

$(NAME)		: libft.a all
				mv libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)
				ranlib $(NAME)

libft.a		:
				git submodule update --init --recursive
				$(MAKE) -C libft libft.a
				cp libft/libft.a .
				cp libft/libft.h .



all			: $(OBJS)

clean		:
				$(RM) $(OBJS)

fclean		: clean
				$(RM) *.out* $(NAME) *.gch
				$(RM) *.a libft.h
				$(MAKE) -C $(SUBDIRS) fclean

re			: fclean $(NAME)


.PHONY		: $(NAME) all bonus clean fclean re libft.a
