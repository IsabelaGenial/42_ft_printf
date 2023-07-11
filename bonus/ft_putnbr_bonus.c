/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:21:03 by igenial           #+#    #+#             */
/*   Updated: 2023/07/10 22:18:35 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb, char c)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter += ft_putchar('-');
	}
	else 
	{
		if (c == '+')
			counter += ft_putchar('+');
		else if (c == ' ')
			ounter += ft_putchar(' ');
	}
	if (nb / 10 > 0)
		counter += ft_putnbr(nb / 10);
	nb = nb % 10 + '0';
	counter += ft_putchar(nb);
	return (counter);
}
