#include "libft.h"
#include "ft_putnbr_base.c"
#include <stdarg.h>
#include <unistd.h>

int	toChar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	toPointer(void *ptr)
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

int	toDecimal(int n)
{
	int	count;

	count = num_len(n);
	if (n < 0)
		count = 1 + num_len(-n);
	//ft_putnbr_fd(n, 1);
	count = ft_putnbr_base(n, "0123456789");
	return (count);
}

int	toUdecimal(unsigned int n)
{
	int	count;

	count = ft_putnbr_base(n, "0123456789");
	return (count);
}

int	toLoHexadecimal(unsigned int n)
{
	int	count;

	count = ft_putunbr_base(n, "0123456789abcdef");
	return (count);
}

int	toUpHexadecimal(unsigned int n)
{
	int	count;

	count = ft_putunbr_base(n, "0123456789ABCDEF");
	return (count);
}

int	toPercent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

/*
int main(void)
{
	size_t	count;


	char	*ptr;
	ptr = NULL;
	printf("\n%d\n", toPointer(ptr));
	count = printf("%p", ptr);
	char	*ptr = "\n";
	count = toString(ptr);
	int	n = 0123;
	count = toDecimal(&n);
	unsigned int n = 0;
	printf("%u\n", n);
	count = toUdecimal(&n);
	unsigned int	n = 42949672;
	count = toLoHexadecimal(&n);
	printf("\n%x", n); 
	unsigned int	n = 42949672;
	count = toUpHexadecimal(&n);
	printf("\n%X", n); 
	count = toPercent();
	printf("\n%%");
	
	printf("\n%zu\n", count);
}
*/
