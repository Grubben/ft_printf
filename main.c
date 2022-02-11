#include "ft_printf.h"

int main (void)
{
	int	count;

	count = ft_printf(" NULL %s NULL ", NULL);
	printf("\n%d\n", count);
	count = printf(" NULL %s NULL ", NULL);
	printf("\n%d\n", count);
	

	return (0);
}
