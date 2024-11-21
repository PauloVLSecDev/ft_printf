/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:47:25 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/21 20:07:05 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.c"

int	main(void)
{
	int number[] = {1};
	int number2[] = {1};
	unsigned long number3 = 2727;
	char	*number4 = "quanto isto dara";
	char	*number5 = "teste as vezes";
	char	*number6 = "a";

	printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("expected %%%%%%\n");
	printf("expected %p\n", number);
	printf("expected %p\n", number2);
	printf("expected %p\n", &number3);
	printf("expected %p\n", &number4);
	printf("expected %p\n", number5);
	printf("expected %p\n", number6);
	printf("expected %p\n", (void *)0);

	printf("o meu \n");

	ft_printf("expected %X\n", 1233 );
	ft_printf("expected %%%%%%\n");
	ft_printf("expected %p\n", number);
	ft_printf("expected %p\n", number2);
	ft_printf("expected %p\n", &number3);
	ft_printf("expected %p\n", &number4);
	ft_printf("expected %p\n", number5);
	ft_printf("expected %p\n", number6);
	ft_printf("expected %p\n", (void *)0);

	ft_printf("expected %X\n", 1233 );
	ft_printf("expected %x\n", 1233);
	ft_printf("expected %X\n", 255);
	ft_printf("expected %x\n", 255);
	ft_printf("expected %X\n", 0);

}
