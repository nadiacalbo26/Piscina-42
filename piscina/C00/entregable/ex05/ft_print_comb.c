/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:48:08 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/09 11:34:10 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;

	centenas = '0';
	while (centenas <= '9')
	{
		decenas = centenas + 1;
		while (decenas <= '9')
		{
			unidades = decenas + 1;
			while (unidades <= '9')
			{
				ft_putchar(centenas, decenas, unidades);
				if (centenas != '7')
					write(1, ", ", 2);
				unidades++;
			}
			decenas++;
		}
		centenas++;
	}
}
