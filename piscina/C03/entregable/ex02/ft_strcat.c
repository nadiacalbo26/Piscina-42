/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:32:20 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/15 19:40:39 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	aux;
	int	auy;

	aux = 0;
	while (src[aux])
		aux++;
	auy = 0;
	while (dest[auy])
	{
		src[aux] = dest[auy];
		auy++;
		aux++;
	}
	src[aux] = '\0';
	return (src);
}
