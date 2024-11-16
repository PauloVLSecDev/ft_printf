/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/15 20:19:57 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	playsholder_type(const char *s, va_list list)
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
	if(s[i++] == 'd' || s[i++] == 'i')
		size += putnbr(va_arg(list, int));
//	if(s == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (s[i] == 'x' || s[i] == 'X')
//		size += ft_hexa(va_arg(list, char *));
	return (size);
}

int	ft_printf(const char *s, ...)
{
	va_list list;
	int	value;
	int	i;
	
	va_start(list, s);

	i = 0;
	value = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			value += playsholder_type(s, list);
		}
		else
		{
			value += putchar(s[i]);
			i++;
		}
	}
	va_end(list);
	return (value);
}

int	main (void)
{
	char	c;
	char	i;

	i = 24;
	c = 'l';
	ft_printf("teste nois %i\n", i);
	return (0);
}

