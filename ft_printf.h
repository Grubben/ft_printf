/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:46:47 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 14:05:04 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char *format, ...);

int		to_char(char c);

int		to_pointer(void *ptr);

int		to_string(char *ptr);

int		to_decimal(int n);

int		to_udecimal(unsigned int n);

int		to_lohexadecimal(unsigned int n);

int		to_uphexadecimal(unsigned int n);

int		to_percent(void);

int		base_check(char *base);

size_t	num_len(ssize_t nbr);

int		ft_putnbr_base(ssize_t nbr, char *base);

int		ft_putunbr_base(size_t nbr, char *base);

size_t	simple_putunbr_base(size_t nbr, char *base);

#endif
