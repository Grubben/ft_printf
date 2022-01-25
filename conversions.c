#include "libft.h"
#include "ft_putnbr_base.c"
#include <stdarg.h>
#include <unistd.h>

int	toChar(va_list pargs)
{
	char c;

	c = va_arg(pargs, int);
	ft_putchar_fd(c, 1);
	//write(1, &c, 1);
	return (1);
}

int	toPointer(char *ptr)
{
	//int		new;
	int		count;

	//new = ft_atoi(ptr);
	count = ft_putnbr_base(ptr, "0123456789ABCDEF");
	return (count);
}


/*
int main(void)
{
	char	*ptr;

	ptr = "hello";
	printf("%d\n", toPointer(ptr));
	printf("%p\n", ptr);
}
*/
