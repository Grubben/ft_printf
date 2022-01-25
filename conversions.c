#include "libft.h"
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

int	toPointer(va_list pargs)
{
	char	*ptr;

	ptr = va_arg(pargs, char*);

	return (9);
}



int main(void)
{
	char	*ptr;

	ptr = "hello";
	printf("%p\n", ptr);
}
