/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:49:00 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/22 15:35:38 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (len += ft_putstr("(null)"));
	while (s[len] != '\0')
	{
		ft_putchar(s[len]);
		len++;
	}
	return (len);
}
