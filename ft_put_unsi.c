/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:48:05 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/22 14:34:48 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsi(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_put_unsi((n / 10));
	len += ft_putchar((n % 10) + '0');
	return (len);
}
