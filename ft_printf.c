/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/15 16:17:47 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	playholder_type(const char *s, va_list list)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	if(s[i++] == '%')
		size += putchar('%');
	if(s[i++] == 'c')
		size += putchar(va_arg(list, int));
	if(s[i++] == 's')
		size += putstr(va_arg(list, char *));
//	if(s{i} == 'p')
//		size += ft_putstr(va_arg(list, char *));
//	if(s{i} == 'd' || s[i] == 'i')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (s[i] == 'x' || s[i] == 'X')
//		size += ft_hexa(va_arg(list, char *));
	return (size);
}

int	ft_printf(const char *point, ...)
{
	va_list list;
	int	value;
	int	i;
	
	va_start(list, point);

	i = 0;
	value = 0;
	while (point[i])
	{
		if (point[i] == '%')
		{
			i++;
			value += playholder_type(point, list);
		}
		else
		{
			value += putchar(point[i]);
			i++;
		}
	}
	va_end(list);
	return (value);
}

int	main (void)
{
	char	c;
	char	*string;

	string = "teste novamente";
	c = 'l';
	ft_printf("teste");
	return (0);
}

