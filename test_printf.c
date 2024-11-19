/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:46:43 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/19 20:14:28 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	 write(1,"paulin bacana", 13);
	write(1,"\n", 1);

	int	num = 120;
	int	d_origin = printf("%d", num);
	int	d_my = ft_printf("%d", num);

	if (d_origin == d_my)
		printf("\n\033[32m[CORRETO]\033[0m origin %d your %d\n", d_origin, d_my);
	else
		printf("\n\033[31m[INCORRETO]\033[0m origin %d your %d\n", d_origin, d_my);

	write(1,"\n", 1);

	int	number2 = -23;
	int	d_origin2 = printf("%d", number2);
	int	d_my2 = ft_printf("%d", number2);

	if (d_origin2 == d_my2)
		printf("\n\033[32m[CORRETO]\033[0m origin %d your %d\n", d_origin2, d_my2);
	else
		printf("\n\033[31m[INCORRETO]\033[0m origin %d your %d\n", d_origin2, d_my2);

	int	i = 26;
	printf("\n%i\n", i);
	int i_origin = printf("\n%i\n", i);
	int i_my = ft_printf("\n%i\n", i);
	if (i_origin == i_my)
		printf("\033[32m[CORRETO]\033[0m origin %i meu %i\n", i_origin, i_my);
	else
	{
		printf("\033[31m[INCORRETO]\033[0m origin %i meu %i\n", i_origin, i_my);
	}

	unsigned int	nsign = -4294967;
	printf("\n%u\n", nsign);
	ft_printf("\n%u\n", nsign);
	if (u_origin == u_myfunction)
		printf("\033[32m[CORRETO]\033[0m origin %u meu %u\n", u_origin, u_my);
	else
		printf("\033[31m[INCORRETO]\033[0m origin %u meu %u\n", u_origin, u_my);


	char	*string = "printe isto";
	printf("\n%s\n", string);
	ft_printf("\n%s\n", string);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
//
	char	carac = 'C';
	printf("\n%c\n", carac);
	ft_printf("\n%c\n", carac);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	char	*point;
	int number = printf("\n%p\n", &point);
	printf("\n%d\n", number);
	ft_printf("\n%p\n", &point);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	unsigned int hex = 42346;
	printf("\n%x\n", hex);
//	ft_printf("\x%c\n", hex);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
//	int	HEX = 123456789;
//	printf("\n%X\n", HEX);
//	ft_printf("\n%X\n", HEX);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	char output_por_origin = printf("\n%%\n");
	char	output_por_my = ft_printf("\n%%\n");
	if (output_por_origin == output_por_my)
		return (printf("\033[32m[CORRETO]\033[0m\n"));
	else
		return (1);

	void	*nill = (void *)0;
	printf("\n%p\n", nill);
	ft_printf("\n%p\n", nill);
//
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//
//	printf("\n%c %s, %p, %d, %i, %u, %x, %X, %%, %p\n", carac, string, &point, num, i, nsign, hex, HEX, nill);

//	printf();
//	ft_printf("\n%p\n", nil);
//
	int test = printf("quero\n");
	printf("%d \n", test);
	ft_printf("quero apenas testar esse role aqui");

	printf(0);
	ft_printf(0);

	return (1);

}
