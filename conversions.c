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

	ft_putstr_fd("0x", 1);
	count = 2;
	count += ft_putnbr_base((size_t)ptr, "0123456789abcdef");
	return (count);
}

int toString(char *ptr)
{
	size_t	len;
	
	len = ft_strlen(ptr);
	write(1, ptr, len);
	return (len);
}

///*
int main(void)
{
	size_t	count;


	/*
	char	*ptr;
	ptr = NULL;
	printf("\n%d\n", toPointer(ptr));
	count = printf("%p", ptr);
	printf("\n%zu\n", count);
	*/
	char	*ptr = "\n";
	count = toString(ptr);
	printf("%zu\n", count); 
}
//*/
