/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:27:21 by igenial           #+#    #+#             */
/*   Updated: 2023/07/09 19:59:59 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		return (write(1, "(nil)", 5));
	counter += write(1, "0x", 2);
	counter += ft_puthex(nb, 'x');
	return (counter);
}
