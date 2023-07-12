/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:21:03 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 21:11:28 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "../mandatory/ft_printf.h"
#include "../bonus/ft_printf_bonus.h"

int	ft_putnbr(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter += ft_putchar('-');
	}
	if (nb / 10 > 0)
		counter += ft_putnbr(nb / 10);
	nb = nb % 10 + '0';
	counter += ft_putchar(nb);
	return (counter);
}
