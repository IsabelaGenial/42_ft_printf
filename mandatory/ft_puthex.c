/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:49:05 by igenial           #+#    #+#             */
/*   Updated: 2023/07/12 19:05:00 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/ft_printf.h"

int	ft_puthex(unsigned int nb, char x)
{
	int	counter;

	counter = 0;
	if (nb / 16 > 0)
		counter += ft_puthex(nb / 16, x);
	nb %= 16;
	if (x == 'x')
		counter += ft_putchar("0123456789abcdef"[nb % 16]);
	else
		counter += ft_putchar("0123456789ABCDEF"[nb % 16]);
	return (counter);
}
