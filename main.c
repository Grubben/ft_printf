#include "ft_printf.h"
#include <limits.h>
int main (void)
{
	int	count = 0;
	void	*p1 = (void *)ULONG_MAX;
	void	*p2 =  (void *)(-ULONG_MAX);

	count = ft_printf("%p %p", p1, p2);
	printf("\n%d\n", count);
	count = printf("%p %p", p1, p2);
	printf("\n%d\n", count);
	

	return (0);
}
