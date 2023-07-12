/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:49:05 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 17:57:16 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t nb, char x)
{
	int	counter;

	counter = 0;
	if (nb / 16 > 0)
		counter += ft_puthex(nb / 16, x);
	nb = nb % 16;
	if (x == 'x')
		counter += ft_putchar("0123456789abcdef"[nb % 16]);
	else
		counter += ft_putchar("0123456789ABCDEF"[nb % 16]);
	return (counter);
}
