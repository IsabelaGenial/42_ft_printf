/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:49:05 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 21:12:59 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/ft_printf.h"
#include "../bonus/ft_printf_bonus.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		write(1, s, 1);
		s++;
		counter++;
	}
	return (counter);
}
