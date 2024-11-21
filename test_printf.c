/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:46:43 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/21 17:52:03 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\n\033[32m[TEST D] \n\033]0m");
	printf("\n");

	int	num = 120;
	int	d_origin = printf("%d ", num);
	int	d_my = ft_printf("%d ", num);

	if (d_origin == d_my)
		printf("\n\033[32m[OK] \033]0m");
       	else
	{
		printf("\n\033[31m[KO] \033[0m \nexpected %d your %d\n", d_origin, d_my);
	}
	
	printf("\n");

	int	number2 = -23;
	int	d_origin2 = printf("%d ", number2);
	int	d_my2 = ft_printf("%d ", number2);

	if (d_origin2 == d_my2)
		printf("\n\033[32m[OK] \033]0m");
	else
		printf("\n\033[31m[KO] \033[0m \nexpected %d your %d\n", d_origin2, d_my2);

	printf("\n");

	int	i = 26;
	int i_origin = printf("%i ", i);
	int i_my = ft_printf("%i ", i);
	if (i_origin == i_my)
		printf("\033[32m[OK]\n\033]0m");
	else
		printf("\033[31m[KO] \033[0m \nespected %i your %i\n", i_origin, i_my);

	printf("\n\033[32m[TEST U]\n\033]0m");
	printf("\n");
	
	unsigned int	nsign = 134;
	unsigned int	u_origin = printf("%u ", nsign);
	unsigned int	u_my = ft_printf("%u ", nsign);
       	if (u_origin == u_my)
		printf("\033[32m[OK] \033]0m");
	else
		printf("\033[31m[KO] \033[0m \nexpected %u your %u\n", u_origin, u_my);

	unsigned int	a = -10;
	unsigned int u_origin2 = printf("%u ", a);
	unsigned int u_my2 = ft_printf("%u ", a);
	if (u_origin2 == u_my2)
		printf("\033[32m[OK]\033]0m");
	else
		printf("\033[31m[KO]\033[0m expected %u your %u\n", u_origin2, u_my2);

	printf("\n\033[32m[TEST S]\n\033]0m");
	printf("\n");

//	char	*string = "printe isto";
//	char *s_origin = printf("%s", string);
//	char *s_my = ft_printf("%s", string);
//	if (strcmp (s_origin, s_my) == 0)
//		printf("\033[32m[OK] \033]0m");
//	else
//		printf("\033[31m[KO] \033[0m \nexpected %s your %s\n", s_origin, s_my);
//
//	printf("\n\033[32m[TEST S]\n\033]0m");
//	printf("\n");
//
//	char	*string = "printe isto";
//	char *s_origin = printf("%s", string);
//	char *s_my = ft_printf("%s", string);
//	strcmp (s_origin, s_my);
//	if (strcpm == 0)
//		printf("\033[32m[OK] \033]0m");
//	else
//		printf("\033[31m[KO] \033[0m \nexpected %s your %s\n", s_origin, s_my);
//
//	char	carac = 'C';
//	c_origin = ft_printf("%c", carac);
//	c_my = ft_printf("%c", carac);
//	if (c_origin == c_my)
//		printf("\033[32m[OK] \033]0m");
//	else
//		printf("\033[31m[KO] \033[0m \nexpected %c your %c\n", c_origin, c_my);
//
//	char 	carac = '2';
//	c_origin2 = printf("%c", carac);
//	c_my2 = ft_printf("%c", carac);
//	if (c_origin2 == c_my2)
//		printf("\033[32m[OK] \033]0m");
//	else
//		printf("\033[31m[KO] \033[0m \nexpected %c your %c\n", c_origin, c_my);

//	char	*point;
//	int number = printf("\n%p\n", &point);
//	printf("\n%d\n", number);
//	ft_printf("\n%p\n", &point);
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//
//	if (output_i_origin != output_i_myfunction)
//		return (0);
//	else
//		return (1);
	unsigned int hex = -4236;
	printf("\n%x\n", hex);
	ft_printf("\n%x\n", hex);
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
//
	printf("\n\033[32m[TEST porcentagem]\n\033]0m");
	printf("\n");

	char	p_origin = printf("\n%%\n");
	char	p_my = ft_printf("\n%%\n");
	if (p_origin == p_my)
		printf("\033[32m[OK]\033[0m\n");
	else
		printf("\033[31m[KO]\033[0m expected %u your %u\n", p_origin, p_my);

	void	*nill = (void *)0;
	printf("\n%p\n", nill);
	ft_printf("\n%p\n", nill);

//	printf("\n%c %s, %p, %d, %i, %u, %x, %X, %%, %p\n", carac, string, &point, num, i, nsign, hex, HEX, nill);
//	ft_printf("\n%c %s, %p, %d, %i, %u, %x, %X, %%, %p\n", carac, string, &point, num, i, nsign, hex, HEX, nill);

	int test = printf("quero\n");
	printf("%d \n", test);
	ft_printf("quero apenas testar esse role aqui");

	return (1);

}
