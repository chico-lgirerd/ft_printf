/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:23:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 12:47:10 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <fcntl.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

int	ft_printstr(char *s);
int	ft_printnumber(int n);
int	ft_printptr(unsigned long long ptr);
int	ft_printchar(int c);

#endif
