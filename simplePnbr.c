#include "ft_printf.h"

size_t	simplePutUnbrBase(size_t nbr, char *base)
{
	size_t	count;

	count = 0;
	if (!base_check(base))
		return (0);
	if (nbr >= ft_strlen(base))
	{
		count = simplePutUnbrBase(nbr / ft_strlen(base), base);
	}
	ft_putchar_fd(base[nbr % ft_strlen(base)], 1);
	return (count + 1);
}

size_t	simplePutNbrBase(ssize_t nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		return (simplePutUnbrBase(-nbr, base) + 1);
	}
	return simplePutUnbrBase(nbr, base);

}

/*
int	main(void)
{
	simplePutUnbrBase(890, "0123456789abcdef");
	printf("\n");
	simplePutNbrBase(-890, "0123456789abcdef");
}
*/
