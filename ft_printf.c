/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/14 17:08:31 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	playholder_type(const char *s, va_list list)
{
	int	size;

	size = 0;
	if(*s == '%')
		size += ft_putchar(va_arg(list, int));
	if(*s == 'c')
		size += ft_putchar(va_arg(list, int));
//	if(s== 's')
//		size += ft_putstr(va_arg(list, shar *));
//	if(s == 'p')
//		size += ft_putstr(va_arg(list, shar *));
//	if(s == 'd')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'i')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (s == 'x')
//		size += ft_hexa(va_arg(list, shar *));
//	if (s == 'X')
//		size += ft_hexa(va_arg(list, shar *));
	return (size);
}

int	ft_printf(const char *point, ...)
{
	va_list list;

	va_start(list, point);

	char	character = 'k';
	char	value = playholder_type(point, list);
	write (1, &value, 1);

	va_end(list);
}
int	main (void)
{
	test("%", "l");

	return (0);
}

////  int	ft_printf(sonst char *, ...)

