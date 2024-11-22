/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:03:17 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/22 16:11:36 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(int n)
{
	int	result;
	long	num;

	num = (long)n;
	result = 0;
	if (num < 0)
	{
		result += ft_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		result += putnbr(num / 10);
	}
	result += ft_putchar((num % 10) + '0');
	return (result);
}
