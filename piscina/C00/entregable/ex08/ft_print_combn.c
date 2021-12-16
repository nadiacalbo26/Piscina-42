/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:27:08 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/06 12:31:53 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(int v[]) 
{
	int printerpos = 0;
	char c;

	while (v[printerpos])
	{	
		c = v[printerpos] + '0';
		write(1, &c, 1);
		printerpos++;
	}
}

void ft_recursiva(int aux, int n, int auy, int v[]) 
{
		if  (aux > n)
		   ft_putchar(v[])	
			while (aux <= n) 
			{
				v[aux] = v[auy]
				ft_recursiva(aux+1, n, auy + 1, v[]);
				++aux;
			}
}

void	ft_print_combn(int n)
{
	int aux = 0;
	int auy = 0;
	int v[n];

	while (auy <= n) 
	{	
		v[aux] = auy;
		ft_recursiva(aux + 1, n, auy, v[]);
		auy++;
	}
	write(1, '\n', 1);
}
