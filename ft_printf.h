/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:03:59 by pvitor-l          #+#    #+#             */
/*   Updated: 2024/11/14 17:10:11 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRNTF_H
# define FT_PRNTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	playholder_type(const char *s, va_list list);
int	ft_printf(const char *point, ...);
char	ft_putchar(char c);
char	ft_putstr(const char *s

#endif
