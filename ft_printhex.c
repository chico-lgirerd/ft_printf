/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:47:09 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 12:45:39 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

int	hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_puthex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else if (n <= 9)
		ft_putchar_fd(n + ' 0', 1);
	else
	{
		if (format == 'x')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (format == 'X')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
}

int	printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, '0', 1));
	ft_puthex(n, format);
	return (hex_len(n));
}
