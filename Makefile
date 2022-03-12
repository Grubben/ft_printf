CC 			= gcc
CFLAGS		= -g3 -Wall -Wextra -Werror -D BUFFER_SIZE=1 
RM			= rm -rf


SUBDIRS		= libft

#SRCS		= $(wildcard *.c)
SRCS		= conversions1.c conversions2.c ft_printf.c simplePnbr.c utils.c

OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

$(NAME)		: libft.a all
				mv libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)
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
				$(MAKE) -C $(SUBDIRS) fclean

re			: fclean $(NAME)


.PHONY		: $(NAME) all bonus clean fclean re libft.a
