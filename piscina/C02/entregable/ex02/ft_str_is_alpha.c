/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:45:46 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 16:53:55 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (!(str[aux] >= 'A' && str[aux] <= 'z'))
			return (0);
		aux++;
	}
	return (1);
}
