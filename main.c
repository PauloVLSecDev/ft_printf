/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:03:09 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/24 16:09:59 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include  <stdio.h>

int	main(void)
{
	int number = printf("");
	int number2 = ft_printf("");

	printf("%d", number);
	printf("\n ");
	printf("o meu print\n");
	ft_printf("%d", number2);
	printf("\n ");
}
