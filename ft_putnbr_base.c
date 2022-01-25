#include <unistd.h>
#include "libft.h"

void	ft_putstr(char *str)
{
	/*
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
	*/
	//write(1, str, ft_strlen(str));
	ft_putstr_fd(str, 1);
}


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

void	ft_putnbr_base(int nbr, char *base)
/* Converts decimal int to numerical base `base`
*/
{
	unsigned int	number;
	char			ar_num[33];
	int				i;

	if (base_check(base) == 1)
	{
		number = nbr;
		if (nbr < 0)
		{
			ft_putstr("-");
			number = nbr * (-1);
		}
		if (number == 0)
			write(1, &base[0], 1);
		ar_num[32] = '\0';
		i = 31;
		while (number != 0 && i > -1)
		{
			ar_num[i] = base[number % ft_strlen(base)];
			number = number / ft_strlen(base);
			--i;
		}
		ft_putstr(&ar_num[i + 1]);
	}
}

#include <stdio.h>
int main()
{
	ft_putnbr_base(232, "0123456789ABCDEF");
	return 0;
}
