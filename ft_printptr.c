/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:10:53 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 13:18:33 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	ptr_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n + '0' + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += write(1, "0x", 2);
	if (ptr == 0)
		print_len += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_len += ptr_len(ptr);
	}
	return (print_len);
}

int	ft_printpercent(void)
{
	return (write(1, '%', 1));
}
