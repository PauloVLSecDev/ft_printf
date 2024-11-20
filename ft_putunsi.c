/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsi_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:48:05 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/20 15:23:07 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsi(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n + 4294967295;
	}
	if (n > 9)
		len += ft_unsi_int((n / 10) + '0');
	len += putchar((n % 10) + '0');
	return (len);
}
int	main(void)
{
	int num1;
	int num2;

	num1 = 104;
	num2 = -104;
	ft_unsi(number);
	ft_unsi(number);
	return (0);
}
