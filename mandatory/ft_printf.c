/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:56:51 by igenial           #+#    #+#             */
/*   Updated: 2023/07/06 17:46:39 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *print, ...)
{
	va_list	action_object;
	int		counter;

	counter = 0;
	va_start(action_object, print);
	while (*print)
	{	
		if (*print == '%')
			counter += ft_type(print++, action_object);
		else
			counter += ft_putchar(*print);
		print++;
	}
	va_end (action_object);
	return (counter);
}
