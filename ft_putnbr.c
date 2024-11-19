/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:03:17 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/19 19:03:24 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(int n)
{
	int	num;
	int	result;

	result = 0;
	if (n < 0)
	{
		result += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		result += putnbr(n / 10);
	}
	result += ft_putchar((n % 10) + '0');
	return (result);
}
