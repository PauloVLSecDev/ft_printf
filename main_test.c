/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:18:03 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/20 16:40:58 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main (void)
{
	signed int	a;
	unsigned int	b;
	
	a = -10;
	b = a;

	printf("%d\n ", a);
	printf("%u\n", b);
	printf("%d %u", a, b);
}