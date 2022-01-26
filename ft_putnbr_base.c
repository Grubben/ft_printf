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

size_t	num_len(size_t unbr)
{
	size_t	count;
	
	if (unbr < 10)
		return (1);
	count = 0;
	while (unbr != 0)
	{
		count++;
		unbr = unbr / 10;
	}
	return (count);
}


int	ft_putnbr_base(ssize_t nbr, char *base)
/* Converts decimal int to numerical base `base`
*/
{
	size_t			number;
	char			*ar_num;
	size_t			size;
	int				i;

	if (base_check(base) == 1)
	{
		number = nbr;
		size = num_len(number);
		if (nbr < 0)
		{
			ft_putstr("-");
			number = nbr * (-1);
		}
		if (number == 0)
		{
			write(1, &base[0], 1);
			return (1);
		}
		ar_num = malloc(size + 1);
		ar_num[size] = '\0';
		i = size - 1;
		while (number != 0 && i > -1)
		{
			ar_num[i] = base[number % ft_strlen(base)];
			number = number / ft_strlen(base);
			--i;
		}
		ft_putstr(&ar_num[i + 1]);
		size = ft_strlen(&ar_num[i + 1]);
		free(ar_num);
		return (size);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	ft_putnbr_base(0, "0123456789");
	return 0;
}
*/
