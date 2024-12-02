/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:31:55 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/12/02 15:46:16 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
  int ret_printf, ret_ft_printf;
  char *string = "adress";

  // Testando %%
  ret_printf = printf("%%\n");
  ret_ft_printf = ft_printf("%%\n");
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %c
  ret_printf = printf("Char: %c %c %c\n", 'A', 'B', 'C');
  ret_ft_printf = ft_printf("Char: %c %c %c\n", 'A', 'B', 'C');
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %s
  ret_printf = printf("String: %s %s\n", "Hello", "World!");
  ret_ft_printf = ft_printf("String: %s %s\n", "Hello", "World!");
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %x e %X
  printf("Original %x e %X\n");
  ret_printf = printf("Hex (lowercase): %x, Hex (uppercase): %X\n", 255, 255);
  ret_ft_printf = ft_printf("Hex (lowercase): %x, Hex (uppercase): %X\n", 255, 255);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %p com (void*)0
  ret_printf = printf("Pointer: %p\n", (void *)0);
  ret_ft_printf = ft_printf("Pointer: %p\n", (void *)0);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %p com string;
  printf("Original %p:\n");
  ret_printf = printf("Pointer: %p\n", string;
  ret_ft_printf = ft_printf("Pointer: %p\n", string);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %u
  printf("Original %u:\n");
  ret_printf = printf("Unsigned: %u\n", 4294967295);
  ret_ft_printf = ft_printf("Unsigned: %u\n", 4294967295);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %u
  printf("Original %u:\n");
  ret_printf = printf("Unsigned: %u\n", -42);
  ret_ft_printf = ft_printf("Unsigned: %u\n", -42);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  // Testando %d e %i
  printf("Original %%d e %%i:\n");
  ret_printf = printf("Integer: %d, Integer: %i\n", -123, 456);
  ret_ft_printf = ft_printf("Integer: %d, Integer: %i\n", -123, 456);
  printf("Retorno printf: %d, Retorno ft_printf: %d\n\n", ret_printf, ret_ft_printf);

  return 0;
}






