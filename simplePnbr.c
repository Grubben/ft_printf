#include <unistd.h>
#include "libft.h"

int	base_check(char *base)
{
	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
		{
			return (0);
		}
		if (ft_charinside(*base, base + 1))
		{
			return (0);
		}
		++base;
	}
	return (1);
}

void	simplePutUnbrBase(size_t nbr, char *base)
{
	if (!base_check(base))
		return ;
	if (nbr >= 10)
	{
		simplePutUnbrBase(nbr / ft_strlen(base), base);
	}
	ft_putchar_fd(base[nbr % ft_strlen(base)], 1);
	return ;
}

void	simplePutNbrBase(ssize_t nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		return (simplePutUnbrBase(-nbr, base));
	}
	return simplePutUnbrBase(nbr, base);

}

int	main(void)
{
	simplePutUnbrBase(890, "0123456789abcdef");
	printf("\n");
	simplePutNbrBase(-890, "0123456789abcdef");
}
