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

static int	playsholder_type(char p, va_list list)
{
	int	size;
	
	size = 0;
	if (p == '%')
		size += ft_putchar('%');
	if (p == 'c')
		size += ft_putchar(va_arg(list, int));
	if (p == 's')
		size += putstr(va_arg(list, char *));
//	if (p == 'p')
//		size += ft_putstr(va_arg(list, char *));
	if (p == 'i' || p == 'd')
		size += putnbr(va_arg(list, int));
//	if (p == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (p == 'x' || p == 'X')
//		size += ft_hexa(va_arg(list, char *));
	return (size);
}

int	ft_printf(const char *s, ...)
{
	va_list list;
	int	value;
	int	index;
	
	va_start(list, s);

	index = 0;
	value = 0;
	while (s[index])
	{
		if (s[index] == '%')
		{
			value += playsholder_type(s[index + 1], list);
			index++;
		}
		else
		{
			value += ft_putchar(s[index]);
			index++;
		}
	}
	va_end(list);
	return (value);
}

int	main (void)
{
	char	c;
	char	porcentagem;
	char	*string;
	int	i;

	i = 24;
	string = "print isto";
       	c = 'h';
	ft_printf("teste %% %s %c %i", string, c, i);
	return (0);
}

