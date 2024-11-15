/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:01:06 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/15 20:07:08 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int	putnbr(int n)
{
	int	num;
	int	result;

	result = 0;
	num = n;
	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	while (n > 9)
	{
		putchar(n / 10);
	}
	putchar(n % 10);
}
