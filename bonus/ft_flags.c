/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:51:50 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 22:49:43 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int ft_flags(const char *print, va_list action_object)
{
	int counter; 

	counter = 0;
	print++;
	if (*print == '#' && ((*print + 1) == 'x' ||(*print + 1) == 'X'))
	{
		counter += ft_puthex(va_arg(action_object, unsigned int), *print + 1);
	}
	if ((*print == '+'|| *print == ' ') && ((*print + 1) == 'd' ||(*print + 1) == 'i'))
	{
		counter += ft_putnbr(va_arg(action_object, int), *print);
	}
	return (counter);
}
