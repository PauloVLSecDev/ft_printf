/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/13 15:46:21 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


static	int	*playholder_type(char c, va_list list)
{
	int	size;

	size = 0;
	if(c == 'c')
		size += ft_putchar(va_arg(list, char));
	if(c == 's')
		size += ft_putstr(va_arg(list, char *));
	if(c == 'p')
		size += ft_putstr(va_arg(list, char *));
	if(c == 'd')
		size += ft_putnbr(va_arg(list, int));
	if(c == 'i')
		size += ft_putnbr(va_arg(list, int));
	if(c == 'u')
		size += ft_putunbr(va_arg(list, unsigned int));
	if (c == 'x')
		size += ft_hexa(va_arg(list, char *));
	if (c == 'X')
		size += ft_hexa(va_arg(list, char *));
	return (size);
}

int	ft_printf(const char *, ...)
{
	
}

int	main(void)
{
	int  x;
	int  meu;

	x = printf("%d, paulim bacana");
	meu = ft_ printf("%d, paulim bacana");

	
	
}
		size += ft_putchar(va_arg(list, char));

}


int	ft_printf(const char *, ...)
{
	
}

int	main(void)
{
	int  x;
	int  meu;

	x = printf("%d, paulim bacana");
	meu = ft_ printf("%d, paulim bacana");

	
	
}
