/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <igenial@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:39:54 by igenial           #+#    #+#             */
/*   Updated: 2023/07/12 18:46:35 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory/ft_printf.h"
#include <stdio.h>

int main()
{
	int b;
	int a;

	b = ft_printf(" %x ", -1);
	a = printf(" %x ", -1);
	printf("minha = %i\n dosE.T.=%i", b, a);
	return(0);
}
