/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:35:25 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/09 12:20:47 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	auy;
	int	c;

	aux = 0;
	while (aux < size)
	{
		auy = 0;
		while (auy < size)
		{
			if (tab[aux] < tab[auy])
			{	
				c = tab[aux];
				tab[aux] = tab[auy];
				tab[auy] = c;
			}
			auy++;
		}
		aux++;
	}
}
