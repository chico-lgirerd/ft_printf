/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:14 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 12:44:57 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_handler(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		print_len += ft_printptr(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		print_len += ft_printnumber(va_arg(args, int));
	if (format == 'u')
		print_len += ft_printnumber(va_arg(args, unsigned int));
	if (format == 'x')
		print_len +=
	if (format == 'X')
	if (format == '%')
		print_len += ft_printpercent();
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		print_len;
	va_list args;

	i = 0;
	print_len = 0;
	va_start(args, s);
	
}
