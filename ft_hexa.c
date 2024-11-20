/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:02:14 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/20 15:16:07 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadecimal(int i, char c)
{
	char	*base;
	int	len;

	len = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	len = putchar(base[i]);
	return (len);
}

int	ft_puthexa(int hexa, char c)
{
	int	size;
	int	result;

	size = 0;
	result = 0;
	while (hexa > 16)
	{
		result = (hexa % 16);
		size +=	hexadecimal(result, c);
	}
		result = (hexa % 16);
		size += hexadecimal(result, c);
	return (size).
}
