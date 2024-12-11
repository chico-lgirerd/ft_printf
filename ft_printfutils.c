/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 13:55:49 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}
