/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:23:46 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/11 16:21:51 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printstr(char *s);
int		ft_printnumber(int n);
int		ft_printptr(unsigned long long ptr);
int		ft_printchar(int c);
int		ft_printhex(unsigned int n, const char format);
size_t	ft_strlen(char *s);
char	*ft_strdup(const char *s);
char	*ft_itoa(int nb);
int		ft_printf(const char *s, ...);
int		ft_handler(va_list args, const char format);
void	ft_putchar(int c);
int		ft_printunsigned(unsigned int n);
int		num_len(int nb);

#endif
