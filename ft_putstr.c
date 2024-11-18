/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:49:00 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/14 20:30:58 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		ft_putchar(s[len]);		
		len++;
	}
	return (len);
}
