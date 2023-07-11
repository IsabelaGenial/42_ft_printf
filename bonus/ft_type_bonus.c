/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:36:56 by igenial           #+#    #+#             */
/*   Updated: 2023/07/10 22:04:05 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(const char *print, va_list action_object)
{
	int	counter;

	counter = 0;
	print++;
	if (*print == ' ' || *print == '#' || *print == '+')
		counter += ft_flags(print, action_object);
	if (*print == '%')
		counter += ft_putchar('%');
	if (*print == 'c')
		counter += ft_putchar(va_arg(action_object, int));
	if (*print == 's')
		counter += ft_putstr(va_arg (action_object, char *));
	if (*print == 'p')
		counter += ft_putptr(va_arg(action_object, unsigned long));
	if (*print == 'd' || *print == 'i')
		counter += ft_putnbr(va_arg(action_object, int));
	if (*print == 'u')
		counter += ft_putnbr(va_arg(action_object, unsigned int));
	if (*print == 'x' || *print == 'X')
		counter += ft_puthex(va_arg(action_object, unsigned int), *print);
	return (counter);
}
