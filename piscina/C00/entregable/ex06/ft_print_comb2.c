/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:27:08 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/09 12:10:04 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	write_pantalla(int a, int b)
{		
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (a / 10) + '0';
	a2 = (a % 10) + '0';
	b1 = (b / 10) + '0';
	b2 = (b % 10) + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{	
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{	
		b = a + 1;
		while (b <= 99)
		{	
			write_pantalla(a, b);
			b++;
		}
		a++;
	}
}
