/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:01:06 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/15 20:07:08 by pvitor-l         ###   ########.fr       */
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
		putnbr(n / 10);
	}
	result += ft_putchar((n % 10) + '0');
	 return (result);
}
