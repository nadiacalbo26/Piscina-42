/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:05:41 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/14 14:39:51 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	aux;
	unsigned int	count;

	aux = 0;
	count = 0;
	while (src[count])
		count++;
	if (size != 0)
	{
		while (src[aux] && aux < size - 1)
		{
			dest[aux] = src[aux];
			aux++;
		}
		dest[aux] = '\0';
	}
	return (count);
}
