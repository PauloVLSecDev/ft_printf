/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:46:43 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/13 14:15:29 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	num = write(1,"paulin bacana", 13);
	printf("\n%d\n", num);
//	int	output_d_myfunction = ft_printf("\n%d\n", num);
//	if (output_d_origin != output_d_myfunction)
//		return (0);
//	else
//		return (1);
//
	int	i = 26;
	printf("\n%i\n", i);
//	output_i_myfunction = ft_printf("\n%i\n", i);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	unsigned int	nsign = -1;
	printf("\n%u\n", nsign);
//	ft_printf("\n%u\n", nsign);
//	if (output_u_origin != output_u_myfunction)
//		return (0);
//	else
//		return (1);
	char	*string = "printe isto";
	printf("\n%s\n", string);
//	ft_printf("\n%s\n", string);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
//
	char	carac = 'C';
	printf("\n%c\n", carac);
//	ft_printf("\n%c\n", carac);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	char	*point;
	printf("\n%p\n", &point);
//	ft_printf("\n%p\n", &point);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	int	hex = 123456789;
	printf("\n%x\n", hex);
//	ft_printf("\x%c\n", hex);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	int	HEX = 123456789;
	printf("\n%X\n", HEX);
//	ft_printf("\n%X\n", HEX);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	printf("\n%%\n");
//	ft_printf("\n%%\n");
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	void	*nill = (void *)0;
	printf("\n%p\n", nill);
//	ft_printf("\n%p\n", nil);
//
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//
	char	*t = "teste";
	char	*a = "para";
	char	*b = "cada";
	char	*c = "argumento";
	char	*d = "diferente";
	printf("\n%s %s %s %s %s\n", t, a, b, c, d);
	return (1);
}
