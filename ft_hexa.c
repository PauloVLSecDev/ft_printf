/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:02:14 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/19 15:41:27 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int strlen (char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);		
}
char *hexadecimal(int c)
{

}
int	ft_puthexa(char *hexa,)
{
	char	*basex;
	char	*baseX;
	int	size;
	
	size = strlen(hexa);
	basex = "0123456789abcdef";
	baseX = "0123456789ABCDEF";

	while (size--)
	{
		result = (hexa[size] % 16);
	}

	return (size).
}
