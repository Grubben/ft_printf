#include "ft_printf.h"

int	is_replace(const char *str);
int	convert(const char *str, va_list pargs);

int	ft_printf(const char *format, ...)
{
	va_list pargs;
	int		count;

	va_start(pargs, format);
	count = 0;
	while (*format)
	{
		if (is_replace(format))
		{
			count += convert(format, pargs);
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(pargs);
	return (count);
}


int	is_replace(const char *str)
{
	if (*str == '%')
	{
		if (ft_charinside(*(str+1), "cspdiuxX%"))
		{
			return (1);
		}
		printf("This shouldn't happen, not reachable.");
		return (0);
	}
	return (0);
}

int	convert(const char *str, va_list pargs)
{
	int		count;

	if (*(str + 1) == 'c')
		count = toChar(va_arg(pargs, unsigned int));
	if (*(str + 1) == 'p')
		count = toPointer(va_arg(pargs, void*));
	if (*(str + 1) == 's')
		count = toString(va_arg(pargs, char*));
	if (*(str + 1) == 'd')
		count = toDecimal(va_arg(pargs, int));
	if (*(str + 1) == 'i')
		count = toDecimal(va_arg(pargs, int));
	if (*(str + 1) == 'u')
		count = toUdecimal(va_arg(pargs, unsigned int));
	if (*(str + 1) == 'x')
		count = toLoHexadecimal(va_arg(pargs, unsigned int));
	if (*(str + 1) == 'X')
		count = toUpHexadecimal(va_arg(pargs, unsigned int));
	if (*(str + 1) == '%')
		count = toPercent();
	return (count);
}

/*int	main(void)
{
	int count;

	char	*string = "%c%p%s%d%i%u%x%X%%";
	count = ft_printf(string, ']', NULL, "hello", 256, -894, 65536, 123, 456);
	printf("\n%c%p%s%d%i%u%x%X%%", ']', NULL, "hello", 256, -894, 65536, 123, 456); 

	printf("\n%d\n", count);
}
*/
