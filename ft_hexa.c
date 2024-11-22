/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:02:14 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/22 15:44:14 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_base(unsigned long n, char c)
{
	char	*base;
	int		result;

	result = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
		result += ft_base((n / 16), c);
	result += ft_putchar(base[n % 16]);
	return (result);
}

int	ft_hex(unsigned long hexa, char c)
{
	int	len;

	len = 0;
	len += ft_base(hexa, c);
	return (len);
}

int	ft_pnt(unsigned long point)
{
	int	len;

	len = 0;
	if (!point)
		return (len += ft_putstr("(nil)"));
	len = 0;
	len += ft_putstr("0x");
	len += ft_base(point, 'x');
	return (len);
}
