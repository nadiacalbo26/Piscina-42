/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:28:13 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/15 19:44:04 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	aux;
	unsigned int	auy;

	aux = 0;
	while (src[aux])
		aux++;
	auy = 0;
	while (dest[auy] && auy < nb)
	{
		src[aux] = dest[auy];
		auy++;
		aux++;
	}
	src[aux] = '\0';
	return (src);
}
