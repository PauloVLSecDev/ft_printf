/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/14 20:33:43 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	playholder_type(const char *s, va_list list)
{
	int	size;

	size = 0;
	if(s == '%')
		size += putchar(va_arg(list, int));
	if(s == 'c')
		size += putchar(va_arg(list, int));
	if(s == 's')
		size += putstr(va_arg(list, char *));
//	if(s == 'p')
//		size += ft_putstr(va_arg(list, char *));
//	if(s == 'd')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'i')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (s == 'x')
//		size += ft_hexa(va_arg(list, char *));
//	if (s == 'X')
//		size += ft_hexa(va_arg(list, char *));
	return (size);
}

int	ft_printf(const char *point, ...)
{
	va_list list;

	va_start(list, point);

	int	value = playholder_type(point, list);
	va_end(list);
	return (value);
}

int	main (void)
{
	char	c;
	char	*string;

	string = "teste uma string";
	c = 's';
	ft_printf("%s", string);
	return (0);
}

