/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:49:05 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 23:14:51 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_puthex(size_t nb, char x)
{
	int	counter;

	counter = 0;
	if (nb != 0)
	{
		counter += ft_putchar('0');
		if (x == 'x')
			counter += ft_putchar('x');
		else if (x == 'X')
			counter += ft_putchar('X');
	}
	if (nb / 16 > 0)
		counter += ft_puthex(nb / 16, x);
	nb = nb % 16;
	if (x == 'x')
		counter += ft_putchar("0123456789abcdef"[nb % 16]);
	else
		counter += ft_putchar("0123456789ABCDEF"[nb % 16]);
	return (counter);
}
