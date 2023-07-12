/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:45:23 by igenial           #+#    #+#             */
/*   Updated: 2023/07/12 19:04:42 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_type(const char *print, va_list action_object);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long nb);
int	ft_puthex(unsigned int nb, char x);
int	ft_putptr(unsigned long nb);
int	ft_printf(const char *str, ...);

#endif
