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

int	toDecimal(int *ptr)
{
	int	count;

	count = num_len(*ptr);
	ft_putnbr_fd(*ptr, 1);
	return (count);
}

int	toUdecimal(unsigned int *ptr)
{
	int	count;

	count = ft_putunbr_base(*ptr, "0123456789");
	return (count);
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
	char	*ptr = "\n";
	count = toString(ptr);
	printf("%zu\n", count); 
	int	n = 0123;
	count = toDecimal(&n);
	printf("\n%zu\n", count);
	*/
	unsigned int n = 0;
	printf("%u\n", n);
	count = toUdecimal(&n);
	printf("\n%zu\n", count);
}
//*/
