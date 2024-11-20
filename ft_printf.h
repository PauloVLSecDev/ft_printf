/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:03:59 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/20 20:52:30 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	putstr(char *s);
int	putnbr(int n);
int	ft_puthexa(int hexa, char c);
int	ft_hex(unsigned int hexa, char c);
int	ft_put_unsi(unsigned int n);
#endif
