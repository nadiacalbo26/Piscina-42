/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:08:03 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/13 18:49:23 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		if (str[aux] >= 97 && str[aux] <= 122)
		{
			str[aux] = str[aux] - 32;
		}
		aux++;
	}
	return (str);
}
