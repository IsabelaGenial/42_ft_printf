/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:39:03 by igenial           #+#    #+#             */
/*   Updated: 2023/07/11 21:11:03 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/ft_printf.h"
#include "../bonus/ft_printf_bonus.h"

int	ft_putchar(char c)
{
	int	counter;

	counter = 0;
	write(1, &c, 1);
	counter++;
	return (counter);
}
