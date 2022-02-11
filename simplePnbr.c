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

int	simplePutNbrBase(size_t nbr, char *base)
{
	static int count = 0;
	if (!base_check(base))
		return (0);
	if (nbr >= 10)
	{
		simplePutNbrBase(nbr / ft_strlen(base), base);
	}
	ft_putchar_fd(base[nbr % ft_strlen(base)], 1);
	count++;
	return (count);
}

int	simplePutUnbrBase(ssize_t unbr, char *base)
{
	if (unbr < 0)
	{
		ft_putchar_fd('-', 1);
		return (1 + simplePutNbrBase(-unbr, base));
	}
	return simplePutNbrBase(unbr, base);

}

int	main(void)
{
	int	count;

	count = simplePutNbrBase(890, "0123456789abcdef");
	printf("\n%d\n", count);
	count = simplePutUnbrBase(-890, "0123456789abcdef");
	printf("\n%d\n", count);
}
