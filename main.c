/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:05:56 by amaria-d          #+#    #+#             */
/*   Updated: 2022/02/16 12:06:57 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	count;

	count = ft_printf("%u", -1);
	printf("\n%d\n", count);
	count = printf("%u", -1);
	printf("\n%d\n", count);
	return (0);
}
