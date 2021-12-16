/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:32:19 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/09 12:19:02 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h> 

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	auy;
	int	swap;

	aux = size - 1;
	auy = 0;
	while (auy < (size / 2))
	{	
		swap = tab[auy];
		tab[auy] = tab[aux];
		tab[aux] = swap;
		auy++;
		aux--;
	}
}
