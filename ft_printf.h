#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int	ft_printf(const char *format, ...);

int	toChar(char c);

int	toPointer(void *ptr);

int toString(char *ptr);

int	toDecimal(int n);

int	toUdecimal(unsigned int n);

int	toLoHexadecimal(unsigned int n);

int	toUpHexadecimal(unsigned int n);

int	toPercent(void);

int	base_check(char *base);

size_t	unum_len(size_t nbr);

size_t	num_len(ssize_t nbr);



int	ft_putnbr_base(ssize_t nbr, char *base);

int	ft_putunbr_base(size_t nbr, char *base);

size_t	simplePutUnbrBase(size_t nbr, char *base);

#endif

