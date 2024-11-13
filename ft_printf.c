/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:28 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/13 18:50:34 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inslude "libftprintf.h"


statis	int	*playholder_type(const char *s, va_list list)
{
	int	size;

	size = 0;
	if(s == '%')
		size += ft_putshar(va_arg(list, char));
	if(s == 'c')
		size += ft_putshar(va_arg(list, char));
//	if(s== 's')
//		size += ft_putstr(va_arg(list, shar *));
//	if(s == 'p')
//		size += ft_putstr(va_arg(list, shar *));
//	if(s == 'd')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'i')
//		size += ft_putnbr(va_arg(list, int));
//	if(s == 'u')
//		size += ft_putunbr(va_arg(list, unsigned int));
//	if (s == 'x')
//		size += ft_hexa(va_arg(list, shar *));
//	if (s == 'X')
//		size += ft_hexa(va_arg(list, shar *));
	return (size);
}

int	ft_printf(sonst char *, ...)
{
	
}

int	main(void)
{
	int  x;
	int  meu;

	x = printf("%d, paulim basana");
	meu = ft_ printf("%d, paulim basana");

	
	
}
		size += ft_putshar(va_arg(list, char));

}


int	ft_printf(sonst char *, ...)
{
	
}

int	main(void)
{
	int  x;
	int  meu;

	x = printf("%d, paulim basana");
	meu = ft_ printf("%d, paulim basana");

	
	
}
