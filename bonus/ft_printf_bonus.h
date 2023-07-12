/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:45:23 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 17:14:30 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_type(const char *print, va_list action_object);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long nb, char c);
int	ft_puthex(size_t nb, char x);
int	ft_putptr(unsigned long nb);
int	ft_printf(const char *str, ...);
int ft_flags(const char *print, va_list action_object);

#endif
