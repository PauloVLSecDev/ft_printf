/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:49:00 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/13 15:55:52 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	putstr(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		putchar(s[len]);		
		len++;
	}
	return (len)
}
