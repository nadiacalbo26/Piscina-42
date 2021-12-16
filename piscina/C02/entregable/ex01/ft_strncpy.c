/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncalbo-h <ncalbo-h@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:48:03 by ncalbo-h          #+#    #+#             */
/*   Updated: 2021/12/15 13:58:34 by ncalbo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (src[aux] && aux < n)
	{
		dest[aux] = src[aux];
		aux++;
	}
	while (aux < n)
	{
		dest[aux] = '\0';
		aux++;
	}
	return (dest);
}
