/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:02:14 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/19 18:26:05 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	strlen (char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);		
}
char	*hexadecimal(int c)
{
	
	char	*basex;
	char	*baseX;

	if ()
	basex = "0123456789abcdef";
	baseX = "0123456789ABCDEF";


}
int	ft_puthexa(int hexa)
{
	int	size;
	int	result;

	size = strlen(hexa);

	while (size--)
	{
		result = (hexa % 16);
		hexadecimal(result)
	}

	return (size).
}
